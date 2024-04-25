// Starting in the name of Almighty Allah
#include <stdio.h>
#include <string.h>

int main ()
{
    int x = 1;
    char a[1005];
    scanf("%s", a);
    
    int i = 0, j = strlen(a) - 1;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            x = 0;
            break;
        }
        i++;
        j--;
    }
    
    (x != 0) ? printf("YES\n") : printf("NO\n");
}