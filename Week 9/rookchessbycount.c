//เปลี่ยนค่า board เมื่อค่าx y ตรงกับ rook แล้วค่อยนับว่าทั้งหมดเเล้วลงได้เท่าไหร่

#include <stdio.h>

int main()
{
    int n, count = 0, board[8][8] = {
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0}

                      };

    scanf("%d", &n);
    int x[n], y[n];
    for (int a = 0; a < n; a++)
    {
        scanf("%d %d", &x[a], &y[a]);
    }
    
    //if x or y == row or column change that to 1
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            for (int c = 0; c < n; c++)
            {
                if (i + 1 == y[c])
                {
                    board[i][j] = 1;
                }
                if (j + 1 == x[c])
                {
                    board[i][j] = 1;
                }
            }
        }
    }
   
    //count space (0)
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[i][j] == 0)
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}