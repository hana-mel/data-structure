#include<stdio.h>
int sum(int x,int y); //function declaration

int main()
{
    int a,b;
    printf("Enter any two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Sum = %d",sum(a,b)); //function call
}

int sum(int x,int y) //function defination
{
    return x + y;
}
