#include <stdio.h>

int main()
{
    int dice[4][3] = {{0,1,0},
                      {3,2,4},  
                      {0,6,0},
                      {0,5,0}              
                             };
    int temp[4];
    char input[100];
    scanf("%s",input);
    int i =0;
    while(input[i] != '\0')
    {
        if(input[i] == 'F')
        {
            temp[0] = dice[3][1];
            
            for(int i = 3 ; i>= 0 ; i--)
            {
                dice[i][1] = dice[i-1][1];
                if(i == 0)
                {
                    dice[i][1] = temp[0];
                }   
            }

        }
        if(input[i] == 'B')
        {
            temp[0] = dice[0][1];
            
            for(int i = 0 ; i<4 ; i++)
            {
                dice[i][1] = dice[i+1][1];
                if(i == 3)
                {
                    dice[i][1] = temp[0];
                }   
            }
        }
        if(input[i] == 'L')
        {
            temp[0] = dice[1][0];
            for(int i = 0 ; i <= 3  ; i++)
            {
                if(i == 2)
                {
                    dice[1][i] = dice[3][1];
                }
                else if(i == 3)
                {
                    dice[i][1] = temp[0];
                }
                else
                {
                    dice[1][i] = dice[1][i+1];
                }
            }
        }
        if(input[i] == 'R')
        {
            temp[0] = dice[3][1];
            for(int i = 3 ; i >= 0  ; i--)
            {
                if(i == 3)
                {
                    dice[i][1] = dice[1][i-1];
                }
                else if(i == 0)
                {
                    dice[1][i] = temp[0];
                }
                else
                {
                    dice[1][i] = dice[1][i-1];
                }
            }
        }
        if(input[i] == 'C')
        {
            temp[0] = dice[0][1];
            for(int i= 0 ; i<4 ; i++)
            {
                if(i == 0)
                {
                    dice[i][1] = dice[1][i];
                }
                else if(i == 1)
                {
                    dice[i][0] = dice[2][1];
                }
                else if(i == 2)
                {
                    dice[i][1] = dice[1][2];
                }
                else
                {
                    dice[1][2] = temp[0];
                }         
            }
        }
        if(input[i] == 'D')
        {
            temp[0] = dice[1][2];
            for(int i= 3 ; i >=0 ; i--)
            {
                if(i == 3)
                {
                    dice[1][2] =  dice[2][1];
                }
                else if(i == 2)
                {
                    dice[i][1] = dice[1][0];
                }
                else if(i == 1)
                {
                    dice[i][0] = dice[0][1];
                }
                else
                {
                    dice[i][1] = temp[0];
                }
            }
        }
        i++;
    }
    printf("%d",dice[0][1]);

    return 0;
}