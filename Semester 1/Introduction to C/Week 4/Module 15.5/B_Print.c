// Starting in the name of Almighty Allah
#include <stdio.h>

void Series (int n)
{
    int i = 1;
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }
}

int main ()
{
    int n; 
    scanf("%d", &n);
    Series(n);
}