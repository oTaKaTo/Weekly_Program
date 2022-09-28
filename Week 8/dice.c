#include <stdio.h>

void Forward (int *w,int *x ,int *y ,int *z)
{
    int temp ;
    temp = *w ;
    *w = *z;
    *z = *y;
    *y = *x;
    *x = temp;   
}

void Backward (int *w,int *x ,int *y ,int *z)
{
    int temp ;
    temp = *x;
    *x = *y ;
    *y = *z;
    *z = *w;
    *w = temp;
}

void Left (int *w,int *x ,int *y ,int *z)
{
    int temp ;
    temp = *w;
    *w = *x ;
    *x = *y ;
    *y = *z ;
    *z = temp;
}

void Right (int *w,int *x ,int *y ,int *z)
{
    int temp ;
    temp = *w;
    *w = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}

void Clockwise (int *w,int *x ,int *y ,int *z)
{
    int temp ;
    temp = *w;
    *w = *x ;
    *x = *y ;
    *y = *z ;
    *z = temp ;

    
}

void CC (int *w,int *x ,int *y ,int *z)
{
    int temp ;
    temp = *w;
    *w = *z;
    *z = *y;
    *y = *x;
    *x = temp; 
}

int main()
{
    int dice[4][3] = {{0,1,0},
                      {3,2,4},  
                      {0,6,0},
                      {0,5,0}              
                             };
    
    char input[100];
    scanf("%s",input);
    int i =0;
    while(input[i] != '\0')
    {
        if(input[i] == 'F')
        {
            Forward(&dice[0][1],&dice[1][1],&dice[2][1],&dice[3][1]);
        }
        if(input[i] == 'B')
        {
            Backward(&dice[0][1],&dice[1][1],&dice[2][1],&dice[3][1]);
        }
        if(input[i] == 'L')
        {
            Left(&dice[1][0],&dice[1][1],&dice[1][2],&dice[3][1]);
        }
        if(input[i] == 'R')
        {
            Right(&dice[1][0],&dice[1][1],&dice[1][2],&dice[3][1]);
        }
        if(input[i] == 'C')
        {
            Clockwise(&dice[0][1],&dice[1][0],&dice[2][1],&dice[1][2]);
        }
        if(input[i] == 'D')
        {
            CC(&dice[0][1],&dice[1][0],&dice[2][1],&dice[1][2]);
        }
        i++;
    }
    printf("%d",dice[0][1]);

    return 0;
}