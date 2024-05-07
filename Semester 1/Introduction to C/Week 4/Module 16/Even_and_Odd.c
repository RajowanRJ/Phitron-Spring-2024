// Starting in the name of Almighty Allah
#include <stdio.h>

void odd_even()
{
    int n;
    scanf("%d", &n);
    int a[n], odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
        even++;
        else odd++;
    }
    printf("%d %d\n", even, odd);
}

int main ()
{
    odd_even();
}