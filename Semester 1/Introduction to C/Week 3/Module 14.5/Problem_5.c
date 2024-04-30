// Starting in the name of Almighty Allah
#include <stdio.h>

char capital_to_small(char a)
{
    a += 32;
    return a;
}

int main ()
{
    char a;
    scanf ("%c", &a);
    printf("%c\n", capital_to_small(a));
}