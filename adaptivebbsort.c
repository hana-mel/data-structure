#include<stdio.h>
void main()
{
    int n,i,j,temp,flag;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements before sorting: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        flag = 0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        break;
    }
    printf("\nThe sorted array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
