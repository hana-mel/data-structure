#include <stdio.h>
int main()
{
    printf("MENU\n1. Join {3,4,5,6} and {7,8,9,10}\n2. Join {3,4,50,60} and {7,8,90,100}\n");
    int ch,larg[10];
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: 
        {
            int l1[4] = {3,4,5,6},l2[4] = {7,8,9,10},i;
            for(i = 0;i<4;i++)
            {
                larg[i] = l1[i];
            }
            for(i = 0;i<4;i++)
            {
                larg[4 + i] = l2[i];
            }
            for(i = 0;i<8;i++)
            {
                printf("%d\t",larg[i]);
            }
            break;
        }
            
        case 2:
        {
            int l1[4] = {3,4,50,60},l2[4] = {7,8,90,100},j;
            for(j = 0;j<4;j++)
            {
                larg[j] = l1[j];
            }
            for(j = 0;j<4;j++)
            {
                larg[4 + j] = l2[j];
            }
            for(j = 0;j<8;j++)
            {
                printf("%d\t",larg[j]);
            }
            break;
        }
        
        default:
        {
            printf("Invalid choice!");
        }
    }
    
}
