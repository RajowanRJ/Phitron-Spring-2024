// Starting in the name of Almighty Allah
#include <stdio.h>
#include <limits.h>

int main ()
{
    int n;
    scanf ("%d", &n);

    int a[n], min = INT_MAX, p;
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(min > a[i]){
            min = a[i];
            p = i + 1;
        }
        
    }
    printf("%d %d", min, p);
    
}