#include<stdio.h>
int sum(int x,int y);

int main()
{
    int a,b,sum=0;
    printf("Enter any two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Sum = %d",a+b);
}

int sum(int x,int y)
{
    return x + y;
}
