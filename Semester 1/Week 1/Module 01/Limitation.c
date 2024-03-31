#include <stdio.h>

int main() 
{
    int a = 1000000000;   // 10^9 digit is allowed 
    printf ("%d\n",a);

    long long int b = 1000000000000000;    // 10^18 digit is allowed
    printf ("%lld\n",b);

    float c = 2.556789485312345;      // Showing wrong value
    printf ("%.15f\n", c);

    double d = 2.556789485312345;    // Total digit will 16 after . and before .
    printf("%.15lf",d);



    return 0;
}