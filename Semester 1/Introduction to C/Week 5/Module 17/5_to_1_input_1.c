// Starting in the name of Almighty Allah
#include <stdio.h>
void fun (int i)
{
    if (i > 5)
    return;

    fun (i + 1);
    printf("%d ", i);
}

int main ()
{
    fun (1);
    return 0;
}