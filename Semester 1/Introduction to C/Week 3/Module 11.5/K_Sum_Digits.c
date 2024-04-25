// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int n, sum = 0; 
    scanf("%d", &n);

    char a[n];
    scanf("%s", a);
    for (int i = 0; i < n; i++)
    {
        int val = a[i] - '0';
        sum = sum + val;
    }
    printf("%d", sum);
}