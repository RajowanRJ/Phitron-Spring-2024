// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    char c;
    int cnt[26] = {0};

    while(scanf("%c", &c) != EOF)
    {
        cnt[c - 'a']++;
    }
    for (int i = 'a'; i <= 'z'; i++)
    {
        if(cnt[i - 'a'] != 0){
            printf("%c : %d\n", i, cnt[i - 'a']);
        }
        
    }
    
}