// Starting in the name of Almighty Allah
#include <stdio.h>
void fun2 ()
{
    printf("Fun2 Starts\n");
    printf("Fun2 Closed\n");
}

void fun ()
{
    printf("Fun Starts\n");
    fun2();
    printf("Fun Closed\n");
}

int main ()
{
    printf("Main Starts\n");
    fun ();
    printf("Main Closed\n");
}