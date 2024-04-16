//Starting in the name of Almighty Allah
#include <stdio.h> 

int main ()
{
    int x, i = 0;
    
    while (1) {
        scanf("%d", &x);
        if (x == 1999){
            printf("Correct\n");
            break;
        }
        else {
            printf("Wrong\n");
        }
        
    }

    return 0;
}