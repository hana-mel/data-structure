#include<stdio.h>
void main()
{
    int n,sum=0,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of an array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    printf("The sum of elements of array - %d",sum);
}

