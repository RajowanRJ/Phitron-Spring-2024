//Starting in the name of Almighty Allah
#include <stdio.h> 

int main ()
{
    int i = 1, n;
    scanf("%d", &n);

    while (i <= 12)
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}