#include<stdio.h>
void main()
{
    int n = 7,sum=0,i;
    int a[n];
    printf("Enter the elements of an array:");
    for (i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<7;i++)
    {
        sum = sum + a[i];
    }
    printf("The sum of elements of array - %d",sum);
}
