// Starting in the name of Almighty Allah
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n;
    scanf("%d", &n);

    long long int a[n], sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        sum += a[i];
    }
    if (sum < 0)
    printf("%lld", sum * -1);
    else 
    printf("%lld", sum);
}