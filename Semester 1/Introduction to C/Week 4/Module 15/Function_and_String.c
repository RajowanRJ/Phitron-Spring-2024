// Starting in the name of Almighty Allah
#include <stdio.h>
#include <string.h>

// No need pass the size for Strings
void fun (char a[])
{
    printf("%s\n", a);
}
int main ()
{
    char a[] = "Rajowan";
    fun(a);
}