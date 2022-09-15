//even = 2n          }   n>=0
//odd = 2n+1         }


#include <stdio.h>

int main()
{
    int num , newnum, n;

    printf("Enter number : ");
    scanf("%d",&num); 
    
    
    if(num < 0)
    {
        newnum = -(num); 
    }
    else
    {
        newnum = num;
    }
    
    while(n>=0)
    {
        if(2*n+1 == newnum)
        {
            if(num<0)
                newnum = num;
            printf("%d is odd number.",newnum);
            return 0 ;
        }
        else if(2*n == newnum)
        {
            if(num<0)
                newnum = num;
            printf("%d is even number.",newnum);
            return 0;
        }
        n++ ;        
    }
    return 0;
}