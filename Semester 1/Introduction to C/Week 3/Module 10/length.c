// Starting in the name of Almighty Allah
#include <stdio.h>
#include <string.h>

int main ()
{   
    // // Method 1
    // char a[100];
    // scanf("%s", a);
    // int i = 0, count = 0;
    // while (a[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }
    // printf("%d", count);
    
    
    // Method 2
    char a[100];
    int i = 0, count = 0;
    while (a[i] != '\0')
    {
        count++;
        i++;
    }
    count = strlen(a);
    printf("%d", count);
    
    
    // // Method 3
    // char a[100];
    // scanf ("%s", a);
    // int i = 0, count = strlen(a);
    // printf("%d", count);


    
}