//Starting in the name of Almighty Allah
#include <stdio.h> 

int main ()
{
    char a;
    scanf ("%c", &a);

    if (a >= 'A' && a <= 'Z') {
        a = a + 32;
        printf("%c", a);
    }
    else if (a >= 'a' && a <= 'z') {
        a = a - 32;
        printf("%c", a);
    }
}