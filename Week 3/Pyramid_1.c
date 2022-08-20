//โปรแกรมสร้างพีระมิดตามจำนวนแถวที่ป้อน

// แสดงผล ช่องว่าง และ * ตามหลักความสัมพันธ์ของแถว

#include <stdio.h>

int main()
{
    int row ; 
    printf("Enter rows of pyramid : ");
    scanf("%d",&row);

    for(int r = 1 ; r<= row ; r++)
    {
        for(int s = row-r ; s >=0 ; s--)
        {
            printf(" ");
        }
        for(int p = 1 ; p <= 2*r - 1 ; p++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}