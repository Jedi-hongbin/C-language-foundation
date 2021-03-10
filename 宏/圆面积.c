#include <stdio.h>

#define PI 3.1415926
#define Square(x) ((x) * (x))
#define V(r) (PI * Square(r))

int main()
{
    int r = 5;
    double v = V(r);
    printf("%f \n", v);

    return 0;
}