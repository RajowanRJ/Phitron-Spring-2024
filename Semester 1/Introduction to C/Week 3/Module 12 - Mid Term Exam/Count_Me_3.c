// Starting in the name of Almighty Allah
#include <stdio.h>
#include <string.h>

int main ()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char c[10001];
        scanf("%s", c);

        int small = 0, capital = 0, digit = 0;
        for (int i = 0; i < strlen(c); i++)
        {
            if (c[i] >= 'a' && c[i] <= 'z')
            {
                small++;
            }
        
            else if (c[i] >= 'A' && c[i] <= 'Z')
            {
                capital++;
            }

            else if (c[i] >= '0' && c[i] <= '9')
            {
                digit++;
            }
        }
        printf("%d %d %d\n", capital, small, digit);
    }
}