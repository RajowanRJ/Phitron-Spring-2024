// Starting in the name of Almighty Allah
#include <stdio.h>

int sum (int a[], int n, int i)
{
    int s = 0;
    if (i == n) return 0;
    
    s = a[i] + sum (a, n, i+1);
    return s;
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
    int s = sum (a, n, 0);
    printf("%d", s);
    return 0;
}