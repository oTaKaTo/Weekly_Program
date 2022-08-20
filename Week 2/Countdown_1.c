//โปรแกรมนับเลขตั้งเเต่ n ลงไปถึง 1

#include <stdio.h>

int main()
{
    int n ;
    
    printf("Enter number : ");
    scanf("%d",&n);

    while(n>0)
    {
        printf("%d ",n);
        n-- ;
    }

    return 0;
}