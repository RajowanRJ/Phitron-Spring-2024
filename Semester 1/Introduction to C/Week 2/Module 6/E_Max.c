//Starting in the name of Almighty Allah
#include <stdio.h> 

int main ()
{
    int x, n, max = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        
        if(x > max)
        max = x;
    }
    printf("%d\n", max);
    
    return 0;
}