// Starting in the name of Almighty Allah
#include <stdio.h>

void fun (int x)
{
    x = 500; // changing the value of x only inside fun
    printf("Value of x inside fun : %d\n", x);
}

int main ()
{
    int x = 100;
    fun(x); // Sending only value not the variable
    printf("Value of x inside main : %d\n", x);
}