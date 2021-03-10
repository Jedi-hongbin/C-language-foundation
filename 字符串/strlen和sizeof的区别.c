#include <stdio.h>
#include <string.h>

int main()
//* https://zhidao.baidu.com/question/171871197.html
{
    char str[] = "123";
    str[0] = '0';
    str[1] = '\0'; //# 遇到\0代表的结束标识就意味着字符串的结束
    // printf("%s \n", str);    //=> 0
    // printf("%c \n", str[0]); //=> 0
    printf("%lu \n", strlen(str));  // => 1 是因为第一位被设置成了 \0结束标识
    printf("%lu \n", sizeof(str));  // => 4 是123 + \0 的长度
    printf("%lu \n", sizeof(char)); // => 1 char类型一般是一个字节
    printf("%lu \n", sizeof(int));  // => 4 环境不同可能分配的字节也不同，书上写的是2

    return 0;
}
