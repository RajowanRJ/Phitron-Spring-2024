// Starting in the name of Almighty Allah
#include <stdio.h>

void star (int n)
{
    int s = n - 1, h = 1, d = 1;

    for (int i = 1; i <= (n*2) - 1; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
         
        if (i % 2 != 0)
        {
            for (int j = 1; j <= h; j++)
            {
                printf("#");
            }
        }
        if (i % 2 == 0)
        {
            for (int j = 1; j <= d; j++)
            {
                printf("-");
            }
        }
        
        if(i < n)
        {
            s--;
            h += 2;
            d += 2;
        }
        else 
        {
            s++;
            h -= 2;
            d -= 2;
        }
        printf("\n");
    }
    
}
int main ()
{
    int n;
    scanf("%d", &n);
    star(n);
}