// Starting in the name of Almighty Allah
#include <stdio.h>
#include <string.h>

int main ()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char a[100];
        scanf("%s", a);
        int x = strlen(a);
        if (x > 10)
        printf("%c%d%c\n", a[0], x - 2, a[x-1]);
        else
        printf("%s\n", a);
    }

}