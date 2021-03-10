#include <stdio.h>

#define PI 3.5
#define S(x) (PI * x * x)

int main()
{
    int x = 2, y = 3;
    printf("%4d \n", (int)(S(x + y)));
    return 0;
}