#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    if(m < 1 || n < 3)
    {
        printf("Invalid number of rows or columns!  Enter again!\n");
        system("pause");
        main();
    }
    int a1[m][n],a2[m][n];
    int *p1,*p2;
    
    for(p1 = &a1[0][0] ; p1 <= &a1[m-1][n-1] ; p1++)
    {
        scanf("%d",p1);
    }
    
    for(p2 = &a2[0][0] ; p2 <= &a2[m-1][n-1] ; p2++)
    {
        scanf("%d",p2);
    }
    
    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j<n; j++)
        {
            printf("%d ",a1[i][j]+a2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
