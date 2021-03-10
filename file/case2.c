#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;

    char c;

    fp1 = fopen("case2.txt", "r");
    fp2 = fopen("case2put.txt", "w");

    c = fgetc(fp1);
    // while (c != EOF)
    while (!feof(fp1))
    {
        putchar(c); //=> abcd1234ABCD
        fputc(c, fp2);
        c = fgetc(fp1);
    }

    return 0;
}
