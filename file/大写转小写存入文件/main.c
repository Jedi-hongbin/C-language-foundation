#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp, *fpt;
    char c;

    if ((fp = fopen("file.txt", "r")) == NULL)
    {
        printf("open file filed!");
        exit(0);
    }
    if ((fpt = fopen("tatget.txt", "w")) == NULL)
    {
        printf("open file filed!");
        exit(0);
    }

    c = fgetc(fp);
    //! while (c != EOF)
    //! 不能用EOF代替feof。 fgetc返回-1时，有两种情况：读到文件结尾或是读取错误。因此我们无法确信文件已经结束, 因为可能是读取错误! 这时我们需要feof()。
    //# feof(fp):文件结束->非零值，未结束则为0。
    while (!feof(fp))
    {
        if (c >= 'A' && c <= 'Z')
        {
            c += 32;
        }
        fputc(c, fpt);
        printf("string: %c current postion: %ld\n", c, ftell(fp));
        c = fgetc(fp);
    }

    fclose(fp);
    fclose(fpt);

    return 0;
}