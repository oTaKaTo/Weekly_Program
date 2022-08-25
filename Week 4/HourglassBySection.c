//โปรแกรมวาดนาฬิกาทรายโดยใช้หลักการแบ่งส่วนเป็น 2 ส่วนบนล่างแล้วเช็คเงื่อนไข

#include <stdio.h>

int main()
{
    int n;

    printf("Enter Size : ");
    scanf("%d", &n);
    printf("\n");

    for (int y = 1; y <= 2 * n - 1; y++)
    {
        for (int x = 1; x <= 2 * n - 1; x++)
        {
            if(y<=n)
            {
                if(x>=y && x <= 2*n -y)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");    
                }
            }
            if(y>n)
            {
                if(x>=2*n-y && x<=y)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
