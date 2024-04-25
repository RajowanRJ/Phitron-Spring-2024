#include <stdio.h>
#include <string.h>

int main ()
{
    char a[22], b[11], c[11], tmp;
    scanf("%s %s", a, b);
    // Saving the Value of a to another variable
    strcpy(c, a);
    strcat(a,b);

    printf("%d %d\n", strlen(c), strlen(b));
    printf("%s\n", a);

    tmp = c[0];
    c[0] = b[0];
    b[0] = tmp;

    printf("%s %s", c, b);
}