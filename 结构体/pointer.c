#include <stdio.h>

int main()
{
    struct Person
    {
        char *name;
        int age;
    } hongbin = {"hongbin", 22}, *p = &hongbin;

    printf("name: %s\n", p->name); //* 指针 才能用 -> 符号
    // printf("name: %s\n", (&hongbin)->name);
    //* 也可以用 . 不过.的优先级高于*所以要用()
    // printf("name: %s\n", (*p).name);

    return 0;
}