#include <stdio.h>
int main()
{
    int n,i,key,found = 0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements: ");
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i] == key)
        {
            found++;
            printf("found %d at position %d\n",key,i+1);
        }
    }
    if(found >= 1)
    {
        printf("Element %d is present %d times in the array",key,found);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}

