#include<stdio.h>
void main()
{
    int n = 2,sum=0,i;
    int a[n],max = a[0];
    printf("Enter the elements of an array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    printf("The sum of elements of array - %d\n",sum);
    for (i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
    }
    printf("%d",max);
}
