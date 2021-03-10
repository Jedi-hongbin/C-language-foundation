#include <stdio.h>

int *fun(int *a, int *b)
{
    if (*a > *b)  // a 的值大于 b的值 *a代表a地址中保存的数值
        return a; // 返回地址 a
    else
        return b;
}

int main()
{
    int x = 7, y = 8, *max;
    int *p = &x;
    printf("%d \n", *p);
    printf("%d \n", (*p)++); // *p++ 不好用 p++也是
    printf("%p \n", p);      // 查看指针指向的地址
    printf("%d \n", x);
    max = fun(&x, &y);
    // 查看指针指向地址的值用*p
    printf("Bigger: %d", *max);
    return 0;
}