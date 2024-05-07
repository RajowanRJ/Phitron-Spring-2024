// Starting in the name of Almighty Allah
#include <stdio.h>

void selection_sort (int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j]) 
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }    
}

int main ()
{
    int n;
    scanf("%d", &n);
    int a[n];
    // Did fault selection_sort (n, a[n]); which is not a pointer to an integer
    selection_sort (n, a);
}