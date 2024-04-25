// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], cnt[m+1];

    for (int i = 0; i < m+1; i++)
    {
        cnt[i] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        cnt [a[i]]++;
    }

    for (int i = 0; i < m+1; i++)
    {
        if (cnt[i] != 0)
        printf("%d\n", cnt[i]);
    }
    
    
}