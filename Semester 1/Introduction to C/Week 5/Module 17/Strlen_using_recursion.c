// Starting in the name of Almighty Allah
#include <stdio.h>

int length (char a[], int i)
{
    if (a[i] == '\0')
    return 0;

    int cnt = length(a, i+1);
    return cnt++;
}

int main ()
{
    char a[100];
    scanf("%s", a);
    
    printf("%d\n", length(a, 0));
    return 0;
}