// Starting in the name of Almighty Allah
#include <stdio.h>
int char_to_ascii(char a)
{
    return a;
}

int char_to_ascii_2()
{
    char a;
    scanf("%c", &a);
    return a;
}

void char_to_ascii_3(int a)
{
    printf("%d\n", a);
}

void char_to_ascii_4()
{
    char a;
    scanf("%c", &a);
    printf("%d\n", a);
}

int main ()
{
    // // Return with Parameter
    // char a;
    // scanf("%c", &a);
    // printf("%d\n", char_to_ascii(a));

    // // Return without Parameter
    // printf("%d\n", char_to_ascii_2());

    // // No return with Parameter
    // char a;
    // scanf("%c", &a);
    // char_to_ascii_3(a);

    // No return with Parameter
    char_to_ascii_4();
}