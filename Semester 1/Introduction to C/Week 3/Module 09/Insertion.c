#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int pos, val;
    scanf ("%d %d", &pos, &val);

    for (int i = n ; i >= pos - 1; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = val;

    for (int i = 0; i <= n; i++)
    {
        printf ("%d ", a[i]);
    }
}