// Starting in the name of Almighty Allah
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], cnt[101] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        cnt [a[i]]++;
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d - %d\n", i, cnt[i]);
    }
    
}