// Starting in the name of Almighty Allah
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

    int i = 0, j = n - 1, tmp;
    while (i < j)
    {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++;
        j--;    
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    
}