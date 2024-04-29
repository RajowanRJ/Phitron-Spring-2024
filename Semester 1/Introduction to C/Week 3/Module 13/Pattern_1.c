// Starting in the name of Almighty Allah 
#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int s = n - 1, k = 1;

    for (int i = 1; i <= (n*2) - 1; i++)
    {
        for (int space = 1; space <= s; space++)
        {
            printf(" ");
        }
        for (int star = 1; star <= k; star++)
        {
            printf("*");
        }
        if(i >= n)
        {
            s++;
            k-=2;
        }
        else 
        {
            s--;
            k+=2;
            
        }
        printf("\n");
    }
    
    
}