// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int n, count = 0;
    scanf("%d", &n);
    int a = n % 10, b = n / 10;
    for (int i = 1; i <= n; i++)
    {
        if(a % b == 0 || b % a == 0) {
            count++;
        }
    }
    (count == 0) ? printf("NO\n") : printf ("YES\n");
}