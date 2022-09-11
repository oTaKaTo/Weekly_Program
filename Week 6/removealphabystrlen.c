



#include <stdio.h>
#include <string.h>

int main()
{
    char message[100] , a ,spacebar;
    
    printf("Enter Message : ");
    scanf("%s",message);
    scanf("%c",&spacebar);
    printf("Enter 1 alphabet : ");
    scanf("%c",&a);

    int length = strlen(message) ;

    for(int i = 0 ; i<length ; i++)
    {
        if(message[i]==a)
        {

        }
        else
        {
            printf("%c",message[i]);
        }
    }
    
    return 0;
}