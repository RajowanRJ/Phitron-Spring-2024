// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    int a[n], sum = 0, sub = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(a[i] >= 0) {
            sum += a[i];
        }
        else {
            sub += a[i];
        }
    }
    printf("%d %d", sum, sub);    
    
}