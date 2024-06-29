// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int a, b, c;
        long long int m, x, y;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        x = a * b * c ;
        y = m / x;

        if (y * x == m)
        {
            printf("%lld\n", y);
        }
        else 
        {
            printf("-1\n");
        }
    }
    return 0;
}