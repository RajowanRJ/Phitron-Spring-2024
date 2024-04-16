// Starting with the name of Almighty Allah
#include <stdio.h>

int main()
{
    int a, b, c;
    long d;

    scanf("%d %d %d %lld", &a, &b, &c, &d);

    if (a + b - c == d || a + b * c == d || a - b * c == d || a - b + c == d || a * b + c == d || a * b - c == d)
    {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

}