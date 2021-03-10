#include <stdio.h>
void fun(char i)
{
    int l = sizeof(i) * 8; // sizeof得到字节 *8是一个字节8个bit组成，得到应该是多少位的二进制
    printf("input %d length: %d \n", i, l);
    int n;
    if (n == 0)
    {
        printf("0");
        return;
    }
    for (n = l - 1; n >= 0; n++)
    {
        if (i & (1 << n))
            break;
    }
    for (; n >= 0; n--)
    {
        printf("%d", (i & (1 << n)) != 0);
    }
    printf("\n");
};
int main()
{
    // const char count = 7;
    // // double a = 1.3;
    // printf("~%d = %d \n", count, ~count);
    // // printf("%d \n", 7 ^ 9); // 14

    // int a = 2;
    // int b = 5;

    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;

    // printf("a: %d b: %d \n", a, b); // 14
    // printf("%d \n", 7 | -8);        // 15
    // fun(count);
    // fun(~count);
    // printf("%d >> %d = %d", 8, 2, 8 >> 2);
    // printf("%d << %d = %d", 8, 2, 8 << 2);
    // printf("%d | %d = %d \t", 1, 1, 1 | 1); // 1
    // printf("%d | %d = %d \t", 1, 0, 1 | 0); // 1
    // printf("%d | %d = %d \t", 0, 0, 0 | 0); // 0
    // printf("%d | %d = %d", 0, 1, 0 | 1);    // 1

    float a = 5.0;
    float b = 7.0;
    // double c = (double)b / a;
    float c = b / a;
    printf("%f", c);

    return 0;
}
