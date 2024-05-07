// Starting in the name of ALmighty Allah
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    double x;
    scanf("%lf", &x);
    printf("ceil of %.2lf is : %0.2lf\n", x, ceil(x));  //Ceiling Value Returned
    printf("floor of %.2lf is : %0.2lf\n", x, floor(x));   //Floor Value Returned
    printf("round of %.2lf is : %0.2lf\n", x, round(x));   //Round Value Returned
    printf("sqrt of %.2lf is : %0.2lf\n", x, sqrt(x));  //Square Root Value Returned
    
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.0lf Raise to power %.0lf is : %0.2lf\n", a, b, pow(a, b));

    int z;
    scanf("%d", &z);
    printf("Absolute Value of %d is : %d\n",z, abs(z));
}