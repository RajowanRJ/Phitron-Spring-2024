// Starting in the name of Almighty Allah
#include <stdio.h>
#include <string.h>

int main ()
{
    char s[10001];
    scanf("%s", s);

    int cnt[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int val = s[i] - 'a';
        cnt[val]++;
    }

    for (int i = 'a'; i <= 'z'; i++)
    {
        if(cnt[i - 'a'] != 0)
        {
            printf("%c - %d\n", i, cnt[i - 'a']);
        }
    }
}