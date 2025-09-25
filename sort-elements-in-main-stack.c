#include <stdio.h>
#include <stdlib.h>
#define MAX 100

// Main and Auxiliary stacks
int mainStack[MAX], auxStack[MAX];
int topMain = -1, topAux = -1;

// Stack operations
void pushMain(int val) 
{
    mainStack[++topMain] = val; 
}
int popMain() 
{
    return mainStack[topMain--]; 
}
int peekMain() 
{
    return mainStack[topMain]; 
}
int isEmptyMain() 
{
    return topMain == -1; 
}

void pushAux(int val) 
{
    auxStack[++topAux] = val; 
}
int popAux() 
{
    return auxStack[topAux--]; 
}
int peekAux() 
{ 
    return auxStack[topAux]; 
}
int isEmptyAux() 
{
    return topAux == -1; 
}

void sortStack() 
{
    while (!isEmptyMain()) 
    {
        int temp = popMain();
        while (!isEmptyAux() && peekAux() > temp) 
        {
            pushMain(popAux());
        }
        pushAux(temp);
    }
    while (!isEmptyAux()) 
    {
        pushMain(popAux());
    }
}


int main() 
{
    int n, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &val);
        pushMain(val);
    }

    sortStack();

    printf("Sorted main stack: ");
    while (!isEmptyMain()) 
    {
        printf("%d ", popMain());
    }
    printf("\n");
    return 0;
}
