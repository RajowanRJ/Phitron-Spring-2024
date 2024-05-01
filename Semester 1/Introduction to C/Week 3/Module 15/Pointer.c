// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int x = 10;
    int *ptr = &x;
    int *ptr2 = ptr;

    *ptr2 = 500;
    printf("x er value - %d\n", x);
    printf("x er value - %d\n", *ptr);
    printf("x er value - %d\n", *ptr2);
}