#include <stdio.h>

int main ()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %.2lf\n", a, b, a / (float)b );

    return 0;
}