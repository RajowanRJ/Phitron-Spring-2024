// Starting in the name of Almighty Allah
#include <stdio.h>

// Initialization Type 1
int fun (int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Initialization Type 2
int fun2 (int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a+i));
    }
}

int main ()
{
    int a[5] = {1, 2, 3, 4, 5};
    //  a[0] er address with size
    fun(a, 5);
    fun2(a, 5);
}