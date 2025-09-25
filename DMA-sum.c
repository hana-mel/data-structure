#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *a = (int *)malloc(sizeof(int)); 
    int *b = (int *)malloc(sizeof(int)); 
    *a = 10;
    *b = 20;
    int sum = *a + *b;
    printf("Sum: %d\n", sum);
    free(a); 
    free(b); 
    return 0;
}
