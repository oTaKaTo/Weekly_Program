//โปรแกรมวาดนาฬิกาทรายโดยใช้หลักการของกราฟเส้นตรง y=mx+c สองเส้น

#include<stdio.h>

int main()
{
    int n ;
    
    printf("Enter size : ");
    scanf("%d",&n);

    
    for(int y=1 ; y <= 2*n-1 ; y++)
    {
        for(int x=1 ; x<=2*n-1 ;x++)
        {
            if(x<=y && x>= -y + (2*n))
            {
                printf("*");
            }
            else if(x>=y && x<= -y + (2*n))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}