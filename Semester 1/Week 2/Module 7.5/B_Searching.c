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
    int x , z = -1;
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if(x == a[i])
        {
            z = i;
            break;
        }
    }
    printf("%d",z);
    
    
}