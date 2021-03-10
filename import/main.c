#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "add.c"

int main()
{
    char *str;

    /* 最初的内存分配 */
    str = (char *)malloc(15);
    strcpy(str, "runoob");
    printf("String = %s,  Address = %p \n", str, str);

    /* 重新分配内存 */
    str = (char *)realloc(str, 25);
    strcat(str, ".com");
    printf("String = %s,  Address = %p\n", str, str);

    /* free 释放已分配的内存 */
    free(str);

    //函数指针
    // int (*f)();
    // f = add;
    // printf("add: %d", f(2, 3));

    // int a = 1, b = 2;
    // int c = add(a, b);
    // printf("add: %d", c);

    // char str[10];
    // printf("place input string:\n");
    // // gets(str);
    // scanf("%s", str); // 只能接受空格前面的字符
    // printf("%s \n", str);

    return 0;
}