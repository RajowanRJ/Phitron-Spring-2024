// Starting in the name of Almighty Allah
#include <stdio.h>

int diagonal_Sum (int row, int a[row][row])
{
    int sum1 = 0, sum2 = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < row; j++)
            {
                if (i == j)
                {
                    sum1 += a[i][j];
                }
            }
            
        }
        if (sum1 < 0)
        sum1 *= -1;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < row; j++)
            {
                if (i + j == row - 1)
                {
                    sum2 += a[i][j];
                }
            }
        }
        if (sum2 < 0)
        sum2 *= -1;
        int totalsum = sum1 + sum2;
        return totalsum;
}
int main ()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    int x = diagonal_Sum(row, a);
    printf("%d", x);
    return 0;
}