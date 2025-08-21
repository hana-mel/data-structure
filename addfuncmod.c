#include <stdio.h>

int add(int a, int b);

int main() 
{
    int sum1,sum2,sum3;
    sum1 = add(10, 20);
    sum2 = add(add(10,20), 30); 
    sum3 = add(add(add(10,20), 30), 40);
    printf("sum1 = %d\n", sum1);
    printf("sum2 = %d\n", sum2);
    printf("sum3 = %d\n", sum3);
    return 0;
}

int add(int a,int b)
{
    return a + b;
}
