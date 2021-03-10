#include <stdio.h>

int main()
{

    /*
    1、a 表示数组名，是第一个元素的地址，也就是元素 a[0]的地址。(等价于&a)
    2、a 是地址常量，所以只要出现 a++，或者是 a=a+2 赋值的都是错误的。
    3、a 是一维数组名，所以它是列指针，也就是说 a+1 是跳一列。 对 a[3][3]的讨论。
    */
    //* 合法的初始化
    int zero[3];
    int one[3 + 3];
    int two[(3 + 3) / 3];
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {
        1,
        2,
        3,
    };
    int c[] = {
        1,
        2,
        3,
        4,
        5,
    };
    //* define 后的的 P 是符号常量，只是长得像变量
#define P 5
    int g[P] = {P};
    printf("%d %d", g[0], P); // 5 5
    // *不合法
    // int e[2] = {1,
    //             2,
    //             3};
    //! excess elements in array initializer 3};
    //! 数组的元素个数不能比规定的长度大

    int count = 2;
    // int f[count];
    //! 元素个数不能是变量，应为常量
    //* int a[5];注意这个地方有一个重要考点，定义时数组的个数不是变量一定是常量。

    return 0;
}