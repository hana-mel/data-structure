#include<stdio.h>
void main()
{
    int sum=0,i;
    int a[7],max = a[0];
    printf("Enter the elements of an array:");
    for (i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<7;i++)
    {
        sum = sum + a[i];
    }
    printf("The sum of elements of array - %d\n",sum);
    for (i=0;i<7;i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
    }
    printf("%d",max);
}
