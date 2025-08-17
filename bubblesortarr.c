#include<stdio.h>
void main()
{
    int a[] = {79,29,89,59,19,49},i,j,temp;
    printf("Array elements before sorting: ");
    for(i=0;i<6;i++)
    {
        printf("%d \t",a[i]);
    }
    for(i=0;i<6 ;i++)
    {
        for(j=0;j<6 - i - 1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nThe sorted array is: ");
    for(i=0;i<6;i++)
    {
        printf("%d\t",a[i]);
    }
}
