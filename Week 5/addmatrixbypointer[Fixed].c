#include <stdio.h>

int main()
{
    int m,n,add;
    scanf("%d %d",&m,&n);
    int a[m][n];
    int *p ;
    p = &a[0][0];
    
    for(p = &a[0][0] ; p <= &a[m-1][n-1] ; p++)
    {
        scanf("%d",p);
    }

    for(p = &a[0][0] ; p <= &a[m-1][n-1] ; p++)
    {
        scanf("%d",&add);
        *p += add;

    }

    for(p = &a[0][0] ; p <= &a[m-1][n-1] ; p++)
    {
        printf("%d ",*p);
        p++ ;
        printf("%d ",*p);
        p++;
        printf("%d\n",*p);
    }
    return 0;
}