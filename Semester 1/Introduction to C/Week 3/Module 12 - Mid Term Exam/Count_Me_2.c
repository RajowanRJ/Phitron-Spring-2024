// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    char c;
    int con = 0;
    while (scanf("%c", &c) != EOF)
    {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            con++;
        }
    }
    printf("%d", con);
}