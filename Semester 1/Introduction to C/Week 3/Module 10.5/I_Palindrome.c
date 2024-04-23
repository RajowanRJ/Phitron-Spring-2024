// Starting in the name of Almighty Allah
#include <stdio.h>
#include <string.h>

int main ()
{
    int x = 0;
    char a[1001], b[1001], tmp;
    scanf("%s", a);
    for (int i = 0; i < strlen(a); i++)
    {
        b[i] = a[i];
    }
    for (int i = 0, j = strlen(a) - 1; i < j; i++, j--)
    {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;

        if (a[i] == b[i])
        x = 1;
    }
    (x == 1) ? printf("YES\n") : printf("NO\n");
}