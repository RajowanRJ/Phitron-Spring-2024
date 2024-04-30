// Starting in the name of Almighty Allah
#include <stdio.h>

void star (int n)
{
    int s = n - 1, k = 1;
    for (int i = 1; i <= n*2; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        if (i <= n-1)
        {
            s--;
            k+=2;
        }
        else if (i <= n)
        {
            s = s;
            k = k;
        }
        else 
        {
            s++;
            k -= 2;
        }
        printf("\n");
    }
    
}

int main ()
{
    int n;
    scanf("%d", &n);
    star(n);
}