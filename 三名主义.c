#include <stdio.h>

void array()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *pa = arr;
    printf("数组名：%d \n", (*pa)); // 1
    pa++;
    printf("数组名：%d \n", *pa++); // 2
    printf("数组名：%d \n", *pa);   // 2
}

void func()
{
    printf("Hello ");
}

void string()
{
    // char strings[5] = {'h', 'e', 'l', 'l', 'o'};
    char strings[5] = "HELLO";
    char *p = strings;
    // TODO: 下面这样定义则可以按预计的HELLO打印，上面这样后面会多几个字符待解决
    // char *p = "HELLO";
    // printf("字符串名：%c \n", *p); // h
    while (*p)
    {
        printf("%s \n", p++);
    }
}

void number()
{
    int num = 0;
    int *p = &num;
    printf("%d \n", (*p)++);
    // TODO: 不理解为什么这指针向下移动要用括号扩上，而字符串则不需要，访问的时候也不用*p++,p++接可以，数组也是如此
    printf("%d \n", *p);
}

int main()
{
    //? 数组名:表示第一个元素的地址。数组名不可以自加，他是地址常量名。(考了很多次)
    //! 函数名:表示该函数的入口地址。
    //* 字符串常量名:表示第一个字符的地址
    // string();
    number();
    return 0;
}