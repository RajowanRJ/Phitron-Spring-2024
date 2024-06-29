// Starting in the name of Almighty Allah
#include <stdio.h>

long long int sum (long long int a[], long long int n, long long int i)
{
    long long int s = 0;
    if (i == n) return 0;
    
    s = a[i] + sum (a, n, i+1);
    return s;
}

int main ()
{
    long long int n;
    scanf("%d", &n);
    
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    long long int s = sum (a, n, 0);
    printf("%d", s);
    return 0;
}