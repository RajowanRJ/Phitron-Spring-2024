// Starting in the name of Almighty Allah
#include <stdio.h>
#include <string.h>

int main ()
{
    char s[1005], t[1005];
    scanf("%s %s", &s, &t);

    int x = strlen(s), y = strlen(t);
    printf("%d %d\n", x, y);
    printf("%s %s",  s, t);
}