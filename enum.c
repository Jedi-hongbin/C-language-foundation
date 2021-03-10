#include <stdio.h>

enum DAY
{
    MON = 1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};

void isPrimeNumber(int a)
{
    int i, status = 0;

    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            status = 1;
            break;
        }
    };

    if (status)
        printf("不是质数! \n");
    else
        printf("是质数 \n");
}

int MultiplicativeOrder(int num)
{
    int count = 1;
    for (int i = 2; i <= num; i++)
    {
        count *= i;
    }
    printf("%d \n", count);
    return count;
}

void increase(int *num)
{
    printf("num: %d\n", *num++);
}

int main()
{

    // int num = 0;
    // int *p = &num;
    // // increase(*p);
    // printf("%d \n", num);
    // printf("%d \n", *p);

    /*
        赋值语句的返回值是右值
        printf("%d", a = 10);// 10
        printf("%d", a = b = 10);// 10
    */
    // isPrimeNumber((int)17);
    // MultiplicativeOrder((int)2);

    // !不停的输入，直到输入# 停止输入
    // char input;
    // while ((input = getchar()) != '#')
    //     ;

    // while ((input = getchar()) != 'p')
    //     ;
    // int a, b;
    // printf("%d \n", a = b = 10);// 10
    // printf("end input: %c", input = 'p');
    // printf("end input: %c", input);

    // 123 倒着输出 321
    // int a = 123;
    // while (a != 0)
    // {
    //     printf("%d \n", a % 10); // 取余数
    //     a = a / 10;
    // }

    // int a;
    // printf("%d \n", (a == 3));// 0

    // int a = 1, b = 2, c = 3, d = 4, e = 5;
    // int k = a > b ? c : (d > e ? d : e);
    // printf("%d \n", k); //5

    // int x = 12, y = 34;
    // char z = 'a';
    // printf("%d \n", x, y);
    // printf("%c", z);
    // printf("%5.3f", 125);
    // ！逻辑非 !0 => true, true => false
    // int a = 0;
    // if (!a)
    // {
    //     printf("ok %d \n", !a);
    // }
    // else
    // {
    //     printf("no %d \n", !a);
    // }

    // enum DAY day;
    // day = THU;
    // printf("%d \n", day);
    // // 遍历枚举元素 0~7连续的才能遍历
    // for (day = MON; day <= SUN; day++)
    // {
    //     printf("枚举元素：%d \n", day);
    // }

    // int x = 7.7; // 警告，但可以执行 相当于7
    // float x = 3.4; // 3.400000
    // int x = 2, 3, 4;
    // int x = (2, 3, 4); // 4
    // char a = 6;
    // printf("%d", a << 2); // 0001 1000 -> 24
    // int x = 017;         // 0开头是八进制 -> 十进制的15
    // printf("%x \n", x);  // f
    // printf("%#x \n", x); // 0xf  %#x:'#'表示带格式输出

    return 0;
}
