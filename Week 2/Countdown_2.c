//โปรแกรมนับเลขตั้งเเต่ n ลงไปถึง 1
#include <stdio.h>

int main()
{
    int n ;
    
    printf("Enter number : ");
    scanf("%d",&n);

    for(int i=n ; i>0 ; i--)
    {
        printf("%d ",i);
    }

    return 0;
}