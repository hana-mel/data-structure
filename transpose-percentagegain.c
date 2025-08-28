#include <stdio.h>

int main()
{
    int a[4][6] = {{0,1,0,0,0,7},{0,0,0,2,0,0},{0,0,0,0,0,3},{4,0,0,0,5,0}};
    int b[100][3],i,j,trans[100][3];
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
    
    trans[0][0] = b[0][1];
    trans[0][1] = b[0][0];
    trans[0][2] = b[0][2];
    
    for(i = 1; i <= count; i++)
    {
        trans[i][0] = b[i][1]; 
        trans[i][1] = b[i][0]; 
        trans[i][2] = b[i][2]; 
    }
    int x = b[0][0]; 
    int y = b[0][1]; 
    int z = b[0][2]; 

    int h = 1;
    if (z > 0)
    {
        for(j = 0; j < y; j++)
        {
            for(i = 1; i <= z; i++)
            {
                if (b[i][1] == j)
                {
                    trans[h][0] = b[i][1];   
                    trans[h][1] = b[i][0];   
                    trans[h][2] = b[i][2];   
                    h++;
                }
            }
        }
    }

    printf("\nTransposed compact sparse matrix representation:\n");
    printf("Row Column Value\n");
    for(i = 0; i < h; i++)
    {
        printf(" %d \t  %d \t %d\n", trans[i][0], trans[i][1], trans[i][2]);
    }
    int storage = 4 * 6;
    int c_storage = (count + 1) * 3;
    float s = ((float)(storage - c_storage) / storage) * 100;
    printf("\nPercentage gain in memory utilization: %.2f%\n", s);

    return 0;
}
