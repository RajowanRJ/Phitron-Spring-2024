// Starting in the name of Almighty Allah
#include <stdio.h>

//Function with both Return Type and Parameter
int sum (int x, int y)
{
    int sum = x + y;
    return sum;
}

int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", sum(a, b));
}