// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col], flag = 1;

    if (row == col)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                scanf("%d", &a[i][j]);
            }
            
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i == j || i + j == row - 1)
                {
                    if (a[i][j] != 1)
                    {
                        flag = 0;
                        break;
                    } 
                }
                else if(a[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    
    else flag = 0;
    if(flag != 0)
    printf("YES\n");
    else 
    printf("NO\n");

    return 0;
}