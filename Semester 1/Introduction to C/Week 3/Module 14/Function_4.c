// Starting in the name of Almighty Allah
#include <stdio.h>

// Function with No return type no Parameters
void sum ()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int sum = x + y;
    printf ("%d\n", sum);
}

int main ()
{
    sum();
}