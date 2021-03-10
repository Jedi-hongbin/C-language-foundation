#include <stdio.h>

#define S(x) (x) * (x)

int main()
{
    int a = 10, k = 2, m = 1;
    a %= S(k + m) / S(k + m);
    //=> (2+1) * (2+1) / (2+1) * (2+1) => (2+1) * (2+1) => 9
    //=> 10 % 9 => 1
    printf("a = %d \n", a); //=> a = 1
    return 0;
}