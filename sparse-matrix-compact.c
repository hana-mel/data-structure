#include <stdio.h>

int main()
{
    int a[4][6] = {{0,1,0,0,0,7},{0,0,0,2,0,0},{0,0,0,0,0,3},{4,0,0,0,5,0}};
    int b[100][3],i,j;
    printf("The matrix elements: \n");
    for(i = 0;i<4;i++)
    {
    for(j = 0;j<6;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int k = 1;
    int count = 0;
    for(i = 0;i<4;i++)
    {
        for(j = 0;j<6;j++)
        {
            if(a[i][j] != 0)
            {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = a[i][j];
                k++;
                count++;
            }
        }
    }
    b[0][0] = 4;
    b[0][1] = 6;
    b[0][2] = count;
    
    printf("The compact sparse matrix representation: \n");
    printf("Row Coloumn Value\n");
    for(i=0;i<=count;i++)
    {
        printf(" %d \t  %d \t %d\n", b[i][0] ,b[i][1] ,b[i][2]);
    }
    return 0;
}
