#include<stdio.h>
void revArr(int arr[],int n)
{
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}
int main() 
{
    int n,i;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    revArr(arr, n);
    printf("Reversed array:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
