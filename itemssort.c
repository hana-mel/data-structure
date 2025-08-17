#include<stdio.h>
void main()
{
    int itms[] = {1,2,3,4,5},i,j,temp1,temp2;
    int prcs[] = {700,250,950,130,300};
    printf("Array elements before sorting: ");
    for(i=0;i<5;i++)
    {
        printf("%d \t",itms[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(prcs[j] > prcs[j+1])
            {
                temp1 = prcs[j];
                prcs[j] = prcs[j+1];
                prcs[j+1] = temp1;
                
                temp2 = itms[j];
                itms[j] = itms[j+1];
                itms[j+1] = temp2;
            }
        }
    }
    printf("\nThe items are: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",itms[i]);
    }
}
