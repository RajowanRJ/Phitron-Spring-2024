// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int k = n;
    for (int i = 1; i <= n; i++)
    {
        int l = 1;
        for (int j = k; j >= 1; j--)
        {
            printf("%d ", l);
            l++;
        }
        k--;
        printf("\n");
    }
    
}