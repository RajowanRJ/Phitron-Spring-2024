// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int x = 50;
    printf("%p\n", &x);
    // Dereference
    int *p = &x;
    printf("%d\n", *p);

    *p = 500;
    printf("%d\n", x);
    printf("%p\n", &x);
    printf("%p\n", p);
}