// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int s = n-1;
    for (int i = 1; i <= n + 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf(" ");
        }
        for (int j = 1; j < n; j+=2)
        {
            printf("*");
        }
        printf("\n");
    }
    
}