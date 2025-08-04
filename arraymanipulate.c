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
    for (i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            b[i] = a[i] * a[i];
        }
        else
        {
            b[i] = a[i] + 1;
        }
    }
    for (i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
}
