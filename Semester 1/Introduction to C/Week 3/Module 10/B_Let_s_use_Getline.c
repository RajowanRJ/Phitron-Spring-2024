// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    char s[1000000];
    fgets(s, 1000000, stdin);
    
    int i = 0;
    while (s[i] != '\\')
    {
        printf("%c", s[i]);
        i++;
    }
}