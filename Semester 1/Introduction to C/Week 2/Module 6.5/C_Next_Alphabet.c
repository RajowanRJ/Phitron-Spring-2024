// Starting with the name of Almighty Allah
#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z')
    {
        if (c == 'z') 
        {
            c = 'a';
            printf("%c", c);
        }
        else {
            c = c + 1;
            printf("%c", c);
        }
    }
}