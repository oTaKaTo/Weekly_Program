

#include <stdio.h>
#include <string.h>

int main()
{
    char message[100] , a ,spacebar ,*p;
    
    printf("Enter Message : ");
    scanf("%s",message);
    scanf("%c",&spacebar);
    p = message ;

    printf("Enter 1 alphabet : ");
    scanf("%c",&a);

    while(*p != '\0' )
    {
        if(*p != a)
        {
            printf("%c",*p);
        }
        p++ ;
    }
    
    return 0;
}