// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    short n;
    scanf("%hd", &n);
    
    for (int i = 0; i < n; i++)
    {
        short k;
        scanf("%hd", &k);

        for (int i = 1; i <= k; i++)
        {
            printf("%hd ", i);
        }
        printf("\n");
    } 
}