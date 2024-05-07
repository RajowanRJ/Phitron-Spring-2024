// Starting in the name of Almighty Allah
#include <stdio.h>
#include <string.h>

int is_palindrome (char *a)
{
    char b [1001];
    for (int i = 0; i < strlen(a); i++)
    {
        b[i] = a[i];
    }
    
    int i = 0, j = strlen(a) - 1;
    while (i < j)
    {
        char tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;

        i++;
        j--;
    }

int flag = 1;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] != b[i])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main ()
{
    char a[1001];
    scanf("%s", a);
    int flag = is_palindrome(a);
    (flag == 1) ? printf("Palindrome\n") : printf("Not Palindrome\n");
}