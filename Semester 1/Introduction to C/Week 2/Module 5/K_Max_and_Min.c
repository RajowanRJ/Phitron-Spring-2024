//Starting in the name of Almighty Allah
#include <stdio.h> 
#include <limits.h>

int main ()
{
    int a, b, c, max = INT_MIN, min = INT_MAX;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        max = a;
    }
    else if (b >= a && b >= c) {
        max = b;
    }
    else {
        max = c;
    }
    

    if (a <= b && a <= c) {
        min = a;
    }
    else if (b <= a && b <= c) {
        min = b;
    }
    else {
        min = c;
    }

    printf("%d %d\n",min, max);

}