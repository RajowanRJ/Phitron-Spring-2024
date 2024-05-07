// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int n, k = 1;
    scanf("%d", &n);
    int s = n - 1;
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
        s--;
        k+=2;
        printf("\n");   
    }
    
}