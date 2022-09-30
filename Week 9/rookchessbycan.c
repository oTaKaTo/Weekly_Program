//เริ่มต้นวางลงได้ 64 เเต่เมื่อลง rook จะวางได้น้อยลง (can--)

#include <stdio.h>

int main()
{
    int n, can = 64, board[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}};
    scanf("%d", &n);
    int x[n], y[n];
    for (int a = 0; a < n; a++)
    {
        scanf("%d %d", &x[a], &y[a]);
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            for (int a = 0; a < n; a++)
            {
                if (i+1 == y[a])
                {
                    if(board[i][j] == 0 )
                    {
                        board[i][j] = 1;
                        can--;
                    }   
                }
                if(j+1 == x[a])
                {
                    if(board[i][j] == 0 )
                    {
                        board[i][j] = 1;
                        can--;
                    }   
                }
            }
        }
    }
    printf("%d", can);
    return 0;
}