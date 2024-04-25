// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int x = d * m1 / (m1 + m2);
        int y = d - x;
        printf("%d\n", y);
    }
}