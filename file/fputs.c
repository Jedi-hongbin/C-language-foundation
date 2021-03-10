#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *f;

    char buf[100] = "1，Hello File \n2，next line \n3，end.";

    f = fopen("t.txt", "w");

    if (NULL == f)
    {
        printf("open file filed! \n");
        exit(0);
    }
    if (strlen(gets(buf)))
    {
        printf("input string length: %lu\n", strlen(buf));
        fputs(buf, f);
    }

    fclose(f);

    return 0;
}