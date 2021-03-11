#include <stdio.h>
#include <stdlib.h>

// #define NULL 0
#define LEN sizeof(struct Students)

struct Students
{
    char name[10];
    //* char *name;//如果定义成一个指针，则下面还需要给这个指针分配地址，否则赋值会出错
    //=> p->name = malloc(p->name);
    int age;
    struct Students *next;
};

void printStudents(struct Students *p)
{
    while (p->name)
    {
        printf("录入结果:name\t\tage\t\tpointer\n");
        printf(" \t%s\t\t%d\t\t%p\n", p->name, p->age, p->next);
        p = p->next;
    }
}

int main()
{
    struct Students *p, *head = NULL;
    // createLinkedList(p, head);

    char input[3] = "yes";

    while (input[0] == 'y')
    {
        p = (struct Students *)malloc(LEN);

        printf("place input name:");
        scanf("%s", (p->name));

        printf("place input age:");
        scanf("%d", &(p->age));

        p->next = head;
        head = p;

        printf("name：%s, age: %2d\n", p->name, p->age);
        printf("继续输入(y/n):");
        scanf("%s", input);
    };

    printf("输入结束\n");
    printStudents(p); //打印输入表格

    //* 添加节点 将next指向当前最新的一个节点
    // struct Students *newStudent = (struct Students *)malloc(LEN);

    // printf("place input name:");
    // scanf("%s", (newStudent->name));

    // printf("place input age:");
    // scanf("%d", &(newStudent->age));

    // newStudent->next = head;
    // head = newStudent;
    p = (struct Students *)malloc(LEN);

    printf("place input name:");
    scanf("%s", (p->name));

    printf("place input age:");
    scanf("%d", &(p->age));

    p->next = head;
    head = p;

    printf("name：%s, age: %2d\n", p->name, p->age);
    printf("输入结束\n");
    printStudents(p); //打印输入表格

    return 0;
}

/*
        char *name = malloc(LEN);
        scanf("%s", name);
        printf("name： %s", name);
    */