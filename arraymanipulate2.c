#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter size of an array:");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the elements of an array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n-1;i++)
    {
        b[i] = a[i] + a[i+1];
        if(a[i]=b[i])
        {
            b[n-1] = a[n-1];
        }
    }
    printf("The array elements:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
}
