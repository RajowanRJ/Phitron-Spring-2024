// Starting in the name of Almighty Allah
#include <stdio.h>

void star (int n)
{
    int s = n - 1, k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
        s--;
        k++;
    }
    
}

int main ()
{
    int n;
    scanf("%d", &n);
    star(n);
}