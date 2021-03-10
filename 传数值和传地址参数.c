#include <stdio.h>

void exchange(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void exchangeByPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 1, b = 2;
    printf("%d %d \n", a, b); // 1 2
    exchange(a, b);
    printf("%d %d \n", a, b); // 1 2
    // 两次打印一样 都是 1 2 ，因为行参只是整型数值，不会影响a和b
    //改为传递指针则可以实现更改a和b
    exchangeByPointer(&a, &b);
    printf("%d %d \n", a, b); // 2 1
    return 0;
}