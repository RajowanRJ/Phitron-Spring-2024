// Starting in the name of Almighty Allah
#include <stdio.h>

//Function with No return type and Parameters
void sum (int x, int y)
{
    int sum = x + y;
    printf("%d\n", sum);
}

int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);

    sum(a, b);
}