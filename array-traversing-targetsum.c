#include <stdio.h>

int main() {
    int A[13] = {3,1,4,7,2,8,5,0,7,1,3,4,6};
    int win_size,tsum,i;
    
    printf("Enter the window size: ");
    scanf("%d",&win_size);
    
    printf("Enter the target sum: ");
    scanf("%d",&tsum);
    
    int sum = 0;
    
    for (i=0;i<win_size;i++)
    {
        sum = sum + A[i];
    }

    for (i=0;i<=13-win_size;i++) 
    {
        if (i>0)
        {
            sum = sum - A[i-1] + A[i+win_size-1]; 
        }
        if (sum==tsum)
        {
            printf("Window starting at index %d matches target sum %d\n", i,tsum);
        }
    }

    return 0;
}
