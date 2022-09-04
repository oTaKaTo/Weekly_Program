//บวกเมทริกซ์ 2 เมทริกซ์ มิติ m × n โดยใช้เมทริกซ์หลัก 1 เมทริกซ์ ส่วนอีกเมทริกซ์ใช้เป็นการบวกเพิ่มเข้าไปใน metrix หลักเลย

#include <stdio.h>

int main()
{
    int y,x;
    scanf("%d %d",&y,&x);
    int mat1[y][x];
    int adder;

    for(int i=0 ;i<y;i++)
    {
        for(int j = 0 ; j<x ; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=0 ;i<y;i++)
    {
        for(int j = 0 ; j<x ; j++)
        {
            scanf("%d",&adder);
            mat1[i][j] += adder;
        }
    }
    for(int i=0 ;i<y;i++)
    {
        for(int j = 0 ; j<x ; j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    return 0;
}