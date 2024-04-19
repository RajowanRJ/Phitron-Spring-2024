//Starting in the name of Almighty Allah
#include <stdio.h> 

int main ()
{
    int t, n, x;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        
        do {
            x = n % 10;
            printf("%d ", x);
            n = n / 10;
        } while (n != 0);
        printf("\n");
        
    }
    
    return 0;
}