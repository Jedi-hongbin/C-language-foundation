#include <stdio.h>

#define SEX(n) (n == 1 ? "男" : "女")

// void printStudent(struct student stu)
// {

//     printf("name : %s \n", stu.name);
//     printf("age  : %d \n", stu.age);
//     printf("sex  : %s \n", SEX(stu.sex));
//     printf("score: %f \n", stu.score);
// }

int main()
{
    struct student
    {
        char name[10];
        int age;
        int sex;
        float score;
    } hongbin binbin = {"binbin", 22, 1, 30};

    // hongbin.name = "Hongbin";
    // hongbin.age = 22;
    // hongbin.sex = 1;
    // hongbin.score = 60.5;

    // printf("Place input name age sex(1 or 0) score: \n");
    // scanf("%s %d %d %f", hongbin.name, &hongbin.age, &hongbin.sex, &hongbin.score);

    // printf("name : %s \n", hongbin.name);
    // printf("age  : %d \n", hongbin.age);
    // printf("sex  : %s \n", SEX(hongbin.sex));
    // printf("score: %f \n", hongbin.score);

    return 0;
}