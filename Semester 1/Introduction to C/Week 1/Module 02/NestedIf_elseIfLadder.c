// Starting in the name of Almighty Allah

#include <stdio.h>

int main ()
{
    int tk;
    
    scanf("%d", &tk);

    if (tk >= 5000) {
        printf ("Cox's bazar jabo\n");
        
        if (tk >= 10000 && tk < 20000)
        printf ("Saint Martin Jabo\n");

        else if (tk >= 20000 && tk < 50000)
        printf ("Passport korabo\n");

        else if (tk >= 50000)
        printf ("Saudi jabo\n");

        else 
        printf("Ferot chole jabo\n");
    }
    
    else
    printf("Kothaw jabona\n");

    return 0;
}