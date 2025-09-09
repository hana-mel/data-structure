#include <stdio.h>
#define n 6

int stack[n];
int top1 = -1,top2 = n - 1;

void push1(int val) 
{
   if (top1 < (n/2)- 1)
    {
        printf("Enter element to be pushed:");
        scanf("%d",&val);
        stack[++top1] = val;
        printf("Pushed %d onto the stack:\n",val);
    }
    else 
    {
    printf("overflow\n");
    }
}

void push2(int val)
{
    if(top2 > n/2)
    {
        printf("Enter element to be pushed:");
        scanf("%d",&val);
        stack[--top2] = val;
        printf("Pushed %d onto the stack:\n",val);
    }
    else
    {
        printf("Overflow\n");
    }
}

int pop1()
{
    if(top1 >= 0)
    {
        int delelm = stack[top1--];
        printf("Popped element %d\n",delelm);
    }
    else
    {
        printf("Underflow\n");
    }
    return -1;
}

int pop2()
{
    if(top2 < n)
    {
        int delelm = stack[top2++];
        printf("Popped element %d\n",delelm);
    }
    else
    {
        printf("Underflow\n");
    }
    return -1;
}

void display() 
{
    int i;
    printf("Stack 1: ");
    for (i = 0; i <= top1; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\nStack 2: ");
    for (i = n - 1; i >= top2; i--)
    {   
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() 
{
    int ch, val;
    do
    {
        printf("MENU\n1.Push into s1\n2.Push into s2\n3.Pop from s1\n4.Pop from s2\n5.Display\n6.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch) 
        {
            case 1:
                push1(val);
                break;
            case 2:
                push2(val);
                break;
            case 3:
                pop1();
                break;
            case 4:
                pop2();
                break;
            case 5:
                display();
                break;
            case 6:
                break;
            default:
                printf("Invalid choice, please try again\n");
        }
    }while(ch != 5);
    return 0;
}
