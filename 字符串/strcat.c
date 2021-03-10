#include <stdio.h>
#include <string.h>

int main()
{
    //# 把 第二个参数 所指向的字符串追加到 第一个参数 所指向的字符串的结尾。
    //# 返回一个指向第一个参数的指针
    // char str[10] = "Hello"; //! 长度必须能容纳拼接后的长度
    char str[20] = "Hello";
    int a = 5;
    // char *p = str;
    char *p;
    int *pa = &a;
    char name[10] = " Hongbin";
    //* 一样 都指向str也就是第一个参数的地址
    printf("str: %p \n", p = strcat(str, name)); //=> 0x7ffeed162480
    printf("str: %p \n", p);                     //=> 0x7ffeed162480
    printf("a: %d \n", *pa);                     //=> 0x7ffeed162480
    // TODO：指针指向整数要用&指向地址，而指向字符串或数组都不用

    return 0;
}