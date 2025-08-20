#include <stdio.h>

int recursive(int a[],int n,int key,int found)
{
    if(found >= n)
    {
        return -1;
    }
    if(a[found] == key)
    {
        printf("Element %d found",key);
        return found;
    }
    
    return recursive(a,n,key,found+1);
    
}
int main()
{
    int n,i,key;
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
    int res = recursive(a,n,key,0);
    if(res == -1)
    {
        printf("Element not found");
    }
    return 0;
}
