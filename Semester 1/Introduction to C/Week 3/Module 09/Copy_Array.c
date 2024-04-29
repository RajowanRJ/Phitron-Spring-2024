// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n], b[n], ans[n + m];
    
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        ans[i] = a[i];
    }
    int j = 0;
    while (j < m)
    {
        scanf("%d", &b[j]);
        ans[i] = b[j];
        i++;
        j++;
    }

    for (int k = 0; k < n + m; k++)
    {
        printf("%d ", ans[k]);
    }
    
}