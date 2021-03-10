#include <stdio.h>

struct BOD
{
    int year;
    int month;
    int day;
};

struct Person
{
    char *name;
    int age;
    struct BOD bod;
} group[2] = {
    {"hongbin", 22, {2000, 8, 20}},
    {"david", 20}},
  //   (*p)[2] = &group; //二维数组不用&指向地址
    *p = group; //二维数组不用&指向地址

int main()
{
    int len = sizeof(group) / sizeof(struct Person); //=> 2 计算有几项
    printf("length = %lu / %lu = %lu\n", sizeof(group), sizeof(struct Person), sizeof(group) / sizeof(struct Person));

    //# 查看结构体变量内容
    printf("Name\t\tAge\n");
    //* 遍历
    // for (int i = 0; i < len; i++)
    // {
    //     printf("%s\t\t%d\n", (p[i])->name, p[i]->age);
    // }

    for (p = group; p < group + len; p++)
    {
        printf("%s\t\t%d\t%d\n", p->name, p->age, p->bod.year);
    }

    //
    // printf("%s\t\t%d\n", p->name, p->age);
    // printf("%s\t\t%d\n", (p + 1)->name, (p + 1)->age);
    // printf("%s\t\t%d\n", (p[1].name), (p + 1)->age);

    return 0;
}