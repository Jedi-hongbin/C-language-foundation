#include <stdio.h>

void demo0()
{
    int p = 1;
    int *P = &p;
    printf("%d\n", (*P)++); // 这样才是p++ 没有括号相当于1++，对值没产生影响
    printf("%d\n", *P++);   // 指向的地址会变化，移动，对原先保存指向的值没有影响
    printf("%d\n", *P);
}
//? 掌握 *p 和(*p)的区别
void demo1()
{
    int *p, a[] = {1, 3, 5, 7, 9};
    p = a;
    //! (*p)++ 这个本身的数值为 1。由于有个++表示数值会增加，指针不移动，但数值 1 由于自加了一次变成了 2。
    // printf("%d \n",*p++);
    // printf("%d \n", (*p));
    // printf("%d \n", (*p)++);
    // printf("%d \n", (*p));
    // printf("%d \n", p[0]);

    //! *p++  这个本身的数值为 1。由于是地址增加一，所以指针指向数值 3 了（下一项）
    printf("%d \n", *p);
    printf("%d \n", *p++);
    printf("%d \n", *p);
    printf("%d \n", p[0]);
}
//? 二级指针
void demo2()
{
    //! *p:一级指针:存放变量的地址。 **q:二级指针:存放一级指针的地址。
    /*
    常考题目:
        int x=7;
        int *p=&x，**q=p;
        问: *p 为多少?(7), *q 为多少?(p), **q 为多少?(7)
        再问:**q=&x 的写法可以吗?
        不可以，因为二级指针只能存放一级指针的地址。
    */
}

int main()
{
    demo2();
    return 0;
}