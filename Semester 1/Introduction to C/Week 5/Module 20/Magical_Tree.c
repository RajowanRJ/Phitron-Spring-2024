// Starting in the name of Almighty Allah
#include <stdio.h>
#include <math.h>

int main ()
{
    int n;
    scanf("%d", &n);
    
    int x = ceil(n/2) + 6;
    int s = x - 1, k = 1;
    for (int i = 0; i < x + 5; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        printf("\n");
        if (i < x - 1)
        {
            k+=2;
            s--;
        }
        else if (i == x - 1)
        {
            s = 5;
            k = n;
        }
    }
    return 0;
}