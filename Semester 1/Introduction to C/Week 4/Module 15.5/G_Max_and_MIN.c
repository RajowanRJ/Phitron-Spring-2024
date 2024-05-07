// Starting in the name of Almighty Allah
#include <stdio.h>
#include <limits.h>

void max_min (int *a, int n)
{
    int max;
    int min;
    for (int i = 0; i < n; i++)
    {
        max = INT_MIN;
        if (a[i] < max)
        max = a[i];
        
        min = INT_MAX;
        if (a[i] > min)
        min = a[i];
    }
    printf("%d %d\n", min, max);
}

int main ()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max_min (a, n);
}