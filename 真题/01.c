#include <stdio.h>

#define IS_ODD(x) ((x) % 2 != 0)

void hello();

int main()
{
    hello();

    int c1, c2;

    printf("Place Enter two integers:");

    scanf("%d %d", &c1, &c2);

    if (IS_ODD(c1) && IS_ODD(c2))
    {
        printf("all odd : %d", c1 - c2);
    }
    else
    {
        printf("%d", c1 + c2);
    }
    return 0;
}

void hello()
{
    printf("hello 函数可以在main之后，main的位置任意，在main后面的函数需要现在前面声明");
}