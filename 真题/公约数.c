#include <stdio.h>

int func(int a, int b)
{
    int i = a;
    while (i % a != 0 || i % b != 0)
        i++;
    return i;
}

int main()
{
    printf("最小公倍数： %d,最大公约数： %d", func(4, 8), (4 * 8) / func(4, 8));

    return 0;
}