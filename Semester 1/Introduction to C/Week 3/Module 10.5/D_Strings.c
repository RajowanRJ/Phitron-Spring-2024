#include <stdio.h>
#include <string.h>

int main ()
{
    char a[22], b[11], c[11], tmp;
    scanf("%s %s", a, b);
    // Saving the Value of a to another variable
    for (int i = 0; i < strlen(a); i++)
    {
        c[i] = a[i];
    }
    
    int length = 0;
    while (a[length] != '\0')
    {
        a[length];
        length++;
    }
    for (int i = 0; b[i] != '\0'; i++,length++)
    {
        a[length] = b[i];
    }
    a[length] = '\0';

    printf("%d %d\n", strlen(c), strlen(b));
    printf("%s\n", a);

    tmp = c[0];
    c[0] = b[0];
    b[0] = tmp;

    printf("%s %s", c, b);
}