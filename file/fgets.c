#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    //# fgets(buf, 100, f); 一次只能获取文件的一行内容，想获取下一行就要再调用一次
    //# 会把获取到的一行内容放到第一个参数中
    char buf[100];

    f = fopen("t.txt", "r");

    if (NULL == f)
    {
        printf("open file filed! \n");
        exit(0); // 退出程序
    }

    while (fgets(buf, 100, f))
    {
        printf("%s\n", buf);
    }

    // fgets(buf, 100, f);
    // printf("get file success: %s \n", buf);

    // fgets(buf, 100, f);
    // printf("get file success: %s \n", buf);
    // fgets(buf, 100, f);
    // printf("get file success: %s \n", buf);

    fclose(f); //! 记得关闭文件

    return 0;
}