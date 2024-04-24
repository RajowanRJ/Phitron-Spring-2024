// Starting in the name of Almighty Allah
#include <stdio.h>
#include <string.h>

int main ()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int value = strcmp(a, b);
    
    if (value < 0) printf("A is Smaller\n");
    else if (value > 0) printf("B is Smaller\n");
    else printf("Same\n");
}