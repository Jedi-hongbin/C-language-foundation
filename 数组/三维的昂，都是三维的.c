#include <stdio.h>
// 二维数组
int main()

{

    /*
        1、a 表示数组名，是第一个元素的地址，也就是元素 a[0][0]的地址。
        2、a 是地址常量，所以只要出现 a++，或者是 a=a+2 赋值的都是错误的。
        3、a 是二维数组名，所以它是行指针，也就是说 a+1 是跳一行。 4、a[0]、a[1]、a[2]也都是地址常量，不可以对它进行赋值操作，同时它们都是列指针，
        a[0]+1，a[1]+1，a[2]+1 都是跳一列。
        5、注意 a 和 a[0] 、a[1]、a[2]是不同的，它们的基类型是不同的。前者是一行元素，后
        三者是一列元素。
        6、数组的初始化，一维和二维的，一维可以不写，二维第二个一定要写
    */
    //! 还有记住脱衣服法则:超级无敌重要
    //! a[2] 变成 *(a + 2) a[2][3] 变成 *(a + 2)[3] 再可以变成 *(*(a + 2) + 3) 这个思想很重要 !

    //! 合法 ⬇
    int a[2][3] = {1, 2, 3, 4, 5, 6}; //合法，很标准的二维的赋值。
    // 相当于
    // int [2][3]{int [3]{(int)1, (int)2, (int)3}, int [3]{(int)4, (int)5, (int)6}}
    int b[2][3] = {
        1,
        2,
        3,
        4,
        5,
    }; //合法
    int c[2][3] = {{1, 2, 3}, {
                                  4,
                                  5,
                              }}; //合法
    int d[2][3] = {{
                       1,
                       2,
                   },
                   {
                       4,
                       5,
                   }};          //合法
    int e[2][2] = {1, 2, 3, 4}; //合法
    int h[][2] = {1, 2, 3, 4};  // 合法  int [2][2]{int [2]{(int)1, (int)2}, int [2]{(int)3, (int)4}}
    //! 不合法
    // int f[2][] = {1, 2, 3, 4};
    // int g[2][3] = {1,2,3,4,5,6,7};

    int arr[2][2] = {{1, 2}, {3, 4}};
    // printf("%d \n", *(arr[1] + 1)); // 4
    // printf("%d \n", *(arr[0] + 1)); // 2
    // 二维数组的指针 二维数组两个**表示数据
    int(*p)[2] = arr;
    // printf("%d \n", **p); // 1
    // // 下面三个都指向[1][0]
    // printf("%d \n", *(p[1]));   // 3
    // printf("%d \n", p[1][0]);   // 3
    // printf("%d \n", arr[1][0]); // 3
    // printf("%d \n", *(arr[1] + 1)); // 4
    // printf("%d \n", *(*(p + 1)));

    //! 指针移动
    //TODO: 理解
    printf("%d \n", *(*(p + 1)));     //3 相当于 *(p[1])
    printf("%d \n", *(*(p + 1) + 1)); //4 相当于 *(p[1][1])

    return 0;
}