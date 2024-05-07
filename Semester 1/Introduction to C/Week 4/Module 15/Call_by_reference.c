// Starting in the name of Almighty Allah
#include <stdio.h>

void fun (int *ptr)
{
    *ptr = 200;
    printf("Value of ptr inside fun - %d\n", *ptr);
}

int main ()
{
    int x = 50;
    printf("Before changing the value of x = %d\n", x);
    fun(&x); // passing the address
    printf("After changing the value of x = %d\n", x);
}