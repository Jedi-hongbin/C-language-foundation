#include <stdio.h>
#include <stdlib.h>

#define NULL 0
#define LEN sizeof(struct students)

struct students
{
    char name[20];
    int num;
    struct students *next;
};

int main()
{
    struct students *head, *p;
    int i;
    head = NULL;
    for (i = 0; i < 10; i++)
    {
        // p = (struct students *)malloc(LEN);
        //* 可以拆分成下面两部写，即，分配内存，让后由p保存
        struct students *n = malloc(LEN);
        p = n;
        // scanf("%s %d", p->name, p->num);
        *((*p).name) = 'A' + i;
        (*p).num = i;
        p->next = head;
        head = p;
    }
    p = head;

    for (i = 0; i < 10; i++)
    {
        printf("%s,%d, %p,%s \n", p->name, p->num, p, p->next);
        p = p->next;
    }

    return 0;
}