// Starting in the name of Almighty Allah
#include <stdio.h>
#include <string.h>

int main ()
{
    char s[1000001];
    scanf("%s", s);
    int sum = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        sum = sum + (s[i] - 48); //ASCII of 0 is 48
    }
    printf("%d", sum);
    
}