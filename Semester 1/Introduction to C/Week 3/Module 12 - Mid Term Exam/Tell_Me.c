// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n; 
        scanf("%d", &n);

        int a[n], x, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        scanf("%d", &x);
        for (int i = 0; i < n; i++)
        {
            if (x == a[i]) cnt++;
        }
        (cnt != 0) ? printf("YES\n") : printf("NO\n");
    }    
}