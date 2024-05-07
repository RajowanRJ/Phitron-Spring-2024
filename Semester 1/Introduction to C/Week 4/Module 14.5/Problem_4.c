// Starting in the name of Almighty Allah
#include <stdio.h>

char small_to_capital(char a)
{
    a -= 32;
    return a;
}

int main ()
{
    char a;
    scanf("%c", &a);
    printf("%c\n", small_to_capital(a));
}