// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{   
    // First Technique ->
    char a[8];
        for (int i = 0; i < 8; i++)
        {
            scanf("%c", &a[i]);
        }
        for (int i = 0; i < 8; i++)
        {
            printf("%c", a[i]);
        }

    // Second Technique ->
    char b[8];
    scanf("%s", b);
    printf("%s", b);
        
}