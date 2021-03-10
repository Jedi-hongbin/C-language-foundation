#include <stdio.h>
#include <string.h>

int main()
{
    //# 把 str1 所指向的字符串和 str2 所指向的字符串进行比较。
    char str1[15];
    char str2[15] = "z";
    int ret;

    strcpy(str1, "abcdef");
    strcpy(str2, "BCDEF");
    printf("%s \n", str2); //=> "BCDEF" 原先的值被覆盖 这是copy操作

    ret = strcmp(str1, str2);

    if (ret < 0)
    {
        printf("str1 小于 str2");
    }
    else if (ret > 0)
    {
        printf("str1 大于 str2");
    }
    else
    {
        printf("str1 等于 str2");
    }

    return 0;
}