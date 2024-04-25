// Starting in the name of Almighty Allah
#include <stdio.h>
#include <string.h>

int main ()
{
    char a[100001];
    scanf("%s", a);
    char cnt[26] = {0};

    for (int i = 0; i < strlen(a); i++)
    {
        int val = a[i] - 'a';
        cnt[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        printf("%c : %d\n", i + 'a', cnt[i]);

    }   
}