#include <stdio.h>
#include <math.h>
// ! math操作的类型都是double
// #include <stdlib.h>
// abs () ⬆

int main()
{
    double a = -2;
    printf("%f \n", a);
    printf("%f \n", fabs(a));
    printf("%f \n", sqrt(fabs(a)));
    printf("%f \n", sqrt(4.0));
    printf("pow(a,4) %f \n", pow(a, 4));
    return 0;
}