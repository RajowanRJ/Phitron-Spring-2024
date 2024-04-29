// Starting in the name of Almighty Allah
#include <stdio.h>

// Function only with Return Type
int sum ()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int sum = x + y;
    return sum;
}

int main ()
{
    printf("%d\n", sum());
}