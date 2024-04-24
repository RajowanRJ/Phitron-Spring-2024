// Starting in the name of Almighty Allah
#include <stdio.h>
#include <string.h>

int main ()
{
    char a[200], b[100];
    scanf("%s %s", a, b);

    int k = strlen(a);
    for (int i = 0; b[i] != '\0'; i++,k++)
    {
        a[k] = b[i];
    }
    printf("%s", a);
    
}