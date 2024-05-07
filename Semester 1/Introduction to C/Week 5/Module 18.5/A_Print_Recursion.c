// Starting in the name of Almighty Allah
#include <stdio.h>

void fun (int i, int n)
{
    if (i > n)
    return;

    printf("I love Recursion\n");
    fun(i+1, n);
}

int main ()
{
    int n;
    scanf("%d", &n);
    fun(1, n);
    return 0;
}