//Starting in the name of Almighty Allah
#include <stdio.h> 

int main ()
{
    char x; 
    scanf ("%c", &x);

    if (x >= '0'  && x <= '9')
    printf("IS DIGIT\n");
    
    else if (x >= 'A' && x <= 'Z')
    printf("ALPHA\nIS CAPITAL\n");
    
    else 
    printf("ALPHA\nIS SMALL");
}