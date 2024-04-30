// Starting in the name of Almighty Allah
#include <stdio.h>

void star (int n)
{
    int k = (n * 2) - 1, s = 0;

    for (int i = 1; i <= n; i++)
    {   /* Space er kaj age hobe tarpor star print hobe
         Etar jonno onek pera khailam*/
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
        k -= 2;
        s++;
    }   
}

int main ()
{
    int n;
    scanf("%d", &n);
    star(n);
}