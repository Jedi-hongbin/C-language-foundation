#include <stdio.h>

//# 1，简单的一个结构体
void case1()
{
    struct Person
    {
        char name[10];
        int age;
    };
}

//# 2，结构体变量
void case2()
{
    struct Person
    {
        char *name;
        int age;
    } hongbin, david = {"david", 20};
    // 变量 hongbin 就有name和age两个属性
    //* 修改hongbin的属性
    printf("%s %d \n", hongbin.name, hongbin.age); //=> (null) -320396128
    hongbin.age = 10;
    hongbin.name = "Hongbin";
    printf("%-10s %d \n", hongbin.name, hongbin.age); //=> Hongbin    10
    printf("%-10s %d \n", david.name, david.age);     //=> david      20
}

//# 结构体数组
void case3()
{
#define GROUPNUMBER 2
    struct Person
    {
        char name[10];
        int age;
    } group[GROUPNUMBER] = {
        //* GROUPNUMBER 长度也可以不给
        {"a", 1},
        {"b", 2},
    };

    int i = 0;
    while (i < GROUPNUMBER)
    {
        printf("%-10s %d \n", group[i].name, group[i].age);
        i++;
    }
}

int main()
{
    case3();
    return 0;
}