#include <stdio.h>
#include <string.h>

int main()
{
    //# 计算字符串 str 的长度，直到空结束字符，不包括空结束字符。
    char str[10] = "Hello";
    int len = strlen(str);
    printf("|%s| 的长度是 |%d|\n", str, len); // => 5

    return 0;
}