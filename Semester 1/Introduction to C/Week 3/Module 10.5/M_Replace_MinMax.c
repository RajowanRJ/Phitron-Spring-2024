// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    int a[n], max, min, index1, index2;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0], index1 = 0;
    min = a[0], index2 = 0;
    //Finding Max and Min
    for (int i = 0; i < n; i++)
    {
        
        if (max < a[i]) 
        {
            index1 = i;
            max = a[i];
        }
        if (min > a[i]) 
        {
            index2 = i;
            min = a[i];
        }
    }
    // Swap Process
    a[index2] = max;
    a[index1] = min;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }  
}