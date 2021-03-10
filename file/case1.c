#include <stdio.h>

int main()
{
    FILE *fp;

    int count = 0;
    char c;
    fp = fopen("t.txt", "r");
    printf("%p \n", fp);
    c = fgetc(fp);
    while (c != EOF)
    {
        count++;
        c = fgetc(fp);
    }
    printf("count: %d \n", count); //=> 5

    return 0;
}
