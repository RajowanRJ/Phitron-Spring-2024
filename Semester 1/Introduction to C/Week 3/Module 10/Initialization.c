// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    //First Technique
    char a[5] = {'a', 'b', 'c', 'd', 'e'};
    for (int i = 0; i < 5; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
    // Second Technique
    char b[7] = "Rajowan";
    for (int i = 0; i < 7; i++)
    {
        printf("%c", b[i]);
    }
    printf("\n");
    // Third Technique -- Print with One Index Extra for '\0' or Null
    char c[8] = "Rajowan";
    printf("%s", c);  
}