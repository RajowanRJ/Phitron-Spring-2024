// Starting in the name of Almighty Allah
#include <stdio.h>
#include <string.h>

int main ()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    // Brute Force method
    for (int i = 0; i <= strlen(b); i++)
    {
        a[i] = b[i];
    }
    // Using Built in Function
    // strcpy(a, b);
    printf("%s\n%s", a, b);
    
}