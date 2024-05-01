// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int a[5] = {10, 20, 30, 40, 50};
    printf("Adress of a[0] - %p\n", &a[0]);
    printf("Adress of a - %p\n", a);
    *a = 60;
    printf("Value of a - %d\n", a[0]);

    // Array using er notun technique
    printf("%d\n", a[1]);
    printf("%d\n", *(a+1));
    printf("%d\n", 1[a]);
    printf("%d\n", *(1+a));
}