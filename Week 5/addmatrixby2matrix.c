//บวกเมทริกซ์ 2 เมทริกซ์ มิติ m × n โดยใช้ matrix 2 matrix บวกกัน

#include <stdio.h>

int main()
{
    int y,x;
    // printf("Enter size of matrix : ");
    scanf("%d %d",&y,&x);
    int mat1[y][x];
    int mat2[y][x];

    for(int i=0 ;i<y;i++)
    {
        for(int j = 0 ; j<x ; j++)
        {
            // printf("Enter [%d][%d] : ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }

    for(int i=0 ;i<y;i++)
    {
        for(int j = 0 ; j<x ; j++)
        {
            // printf("Enter [%d][%d] : ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Output :\n");
    

    for(int i=0 ;i<y;i++)
    {
        for(int j = 0 ; j<x ; j++)
        {
            printf("%d ",mat1[i][j]+mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}