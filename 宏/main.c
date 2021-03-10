#include <stdio.h>

#define COUNT 1
#define NAME "宏斌"
#define WORD 'h'
#define Square(num) num *num
#define PositiveNumber(num) num > 0 ? 1 : 0
#define MIN(x, y) (x) < (y) ? (x) : (y)
//: 如果是下面这样就会先计算括号里面的值再和外面的运算，不会产生问题,下面的结果就是100
// #define MIN(x, y) ((x) < (y) ? (x) : (y))

//! 防止出现二意性，如 a*a 把 1+2带入： 1+2 * 1+2值就不同了，所以要用括号括上防止出现意外情况

//TODO 如何宏定义一个数组 或者二维数组

int main()
{
    // printf("%d \n", COUNT);
    // printf("%s \n", NAME);
    // printf("%d \n", Square(2));
    // printf("%d \n", PositiveNumber(2));
    // printf("%d \n", PositiveNumber(-2));
    int a = 10, b = 15;
    int k = 10 * MIN(a, b);
    //* 注意这的运算优先级 实际上是这样 10 * x < y ? x : y
    //* 就变成了10 先*x载和y比较
    printf("%d \n", k); //=> 15
    return 0;
}