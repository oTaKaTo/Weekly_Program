//find the middle if middle*2 = original then it's even number.

#include <stdio.h>

int main()
{    
    int num ,mid;
    printf("Enter number : ");
    scanf("%d",&num);
    mid = num/2 ;

    mid += mid ;
    
    if(mid == num)
    {
        printf("%d is even number.",num);
    }
    else
    {
        printf("%d is odd number.",num);
    }   
    return 0;
}