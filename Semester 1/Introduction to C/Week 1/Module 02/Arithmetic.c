// Starting in the name of Almighty Allah

#include <stdio.h>

int main ()
{
    int a, b, x;

    scanf("%d %d", &a, &b);

    printf ("%d + %d = %d\n", a, b, a + b);
    printf ("%d - %d = %d\n", a, b, a - b);
    printf ("%d * %d = %d\n", a, b, a * b);
    printf ("%d / %d = %.2f\n", a , b, (float)a / b);
    printf ("%d %% %d = %d\n", a, b, a % b);

    return 0;
}