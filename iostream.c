#include <stdio.h>
#include <string.h>
// 十进制转换 打印二进制
void printBinary(int i)
{
    int l = sizeof(i) * 8; // sizeof得到字节 *8是一个字节8个bit组成，得到应该是多少位的二进制
    printf("input %d length: %d \n", i, l);
    int n;
    printf("n: %d \n", n);
    if (n == 0)
    {
        printf("0 \n");
        return;
    }
    for (n = l - 1; n >= 0; n++)
    {
        if (i & (1 << n))
            printf("mmnn \n");
        break;
    }
    for (; n >= 0; n--)
    {
        printf("%d", (i & (1 << n)) != 0);
    }
    printf("\n");
};

void prty(int *x)
{
    printf("%d \n", *x);
};

int m = 13;

int fun2(int x, int y)
{
    int m = 3;
    return x * y - m;
};

#define SUB(X, Y) X - Y;

char *fun(char *p)
{
    return (p);
}

int main()
{
    // printf("%d", 3 % 11);
    // float sp = 1.23;
    // printf("%.2f", sp);
    // float a = 1.5;
    // printf("%d", (int)(a + 1.5) + 2); // 先算a + 1.5然后int，再+2
    // printf("%d", 6 > 4 && 2 || 8 < !4);
    // printf("---> %d", 2 || 3);
    // int *a, *c;
    // float *b;
    // scanf("%d%f,%d", a, b, c);
    // printf("%d,%f,%d", a, b, c);

    // int a, b;
    // scanf("%d,%d", &a, &b);
    // printf("a = %d, b = %d", a, b);

    // int a[10] = {1,2,,3,4,5};
    // printf("%d", ~7);

    // 1
    // int a = 100;
    // int b = 200;
    // printf("%d", (a, b)); // 200 逗号返回后面的结果

    // 2
    // char st[4][6] = {"ABCDE"};

    // char s[] = {'A', 'B', 'C', 'D', 'E'};

    // char *s;
    // s = "ABCDE";

    // char *s;
    // scanf("%s", s);

    // 3,
    // int a = 23;
    // do
    // {
    //     printf("%d ", a--);
    // } while (!a);

    //4，以下scanf语句中能正确为变量a读入数据的是
    // int a, *pa = &a;
    //A.scanf(“%d”,pa);            B.scanf(“%d”,a);
    //C.scanf(“%d”,&pa);           D.scanf(“%d”,*pa);
    // scanf("%d", pa); // 正确
    // scanf("%d", a); -> *a  format specifies type 'int *' but the argument has type 'int'
    // scanf("%d", &pa);//  type 'int **'
    // scanf("%d", *pa);//  format specifies type 'int *' but the argument has type 'int'
    // printf("a: %d", a);

    //5,
    // printf("%d\n", strlen("ats\n012\1\\")); // 9

    // char str[100] = {10, 123};
    // gets(str);
    // printf("Length: %lu\n", strlen(str)); // 2

    // printf("123 \n \\ length: %lu,", strlen("123 \n \\"));

    // 6,
    // int s = 0;

    // for (int i = 1; i < 10; i += 2)
    // {

    //     s += i + 1;
    // }
    // printf("%d", s); // 30 1～10偶数之和

    // 7，
    // static int k; // 0 static标识 默认值为0
    // // printf("static var K: %d", k);
    // int n[2];

    // for (int i = 0; i < 2; i++)
    // {
    //     n[i] = i;
    // }

    // printf("n[%d]= %d", k, n[k]);

    //8,
    // char *s1 = "ABCDEF", *s2 = "aB;"; //比较ASCII码 A - 65 a - 97
    // printf("%d\n", strcmp(s1, s2)); // s1 < s2 返回负数，是他俩的差 65 - 97

    // 9 对a数组元素的错误引用是
    // int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, *p = a, i;
    // i => 1 ?
    // p == a[0] == 1
    // int quote = a[p - a]; // 1
    // int quote = *(&a[i]); // 2
    // int quote = p[i]; // 2
    // int quote = *(*(a + i)); //err:  2
    // printf("%d ", i);

    //10，
    // struct person
    // {
    //     char name[9];
    //     int age;
    // };
    // struct person class[10] = {
    //     "John", 17, "paul", 19, "Mary", 18, "Adam", 16};

    // printf("%c", class[2].name[0]); // M

    // 11,
    // char str[10], *b = str;

    // printf("请输入一个字符串：");
    // // gets(str);
    // // gets(b);
    // // gets(&str[0]); // & ->指向 str[0]的地址，即str
    // // gets(str[0]); // -> err 不能修改str

    // printf("您输入的字符串是：%s", str);

    //12,

    // void prty(int *x)
    // {
    //     printf("%d \n", *x);
    // };

    // int a = 25;
    // prty(&a); // 25

    // 13,
    // int m = 13;

    // int fun2(int x, int y)
    // {
    //     int m = 3;
    //     return x * y - m;
    // };

    // int a = 7, b = 5;
    // // float result = (float)fun2(a, b) / m; // 2.46
    // float result = fun2(a, b) / m; // 2
    // printf("result: %f \n", (result));

    // 14,
    // int x = 10, y = 10;
    // printf("%d %d \n", x--, --y); // 10,9

    //15
    // int n = 0, *p = &n, **q = &p;
    // // 错误赋值
    // // p = 1;
    // // *q = 1;
    // // q = p;
    // *p = 5;// 正确赋值
    // printf("%d \n", n);

    //16，
    //在C语言中，要求运算数必须是整型的运算符是( A )。
    // A. %				B. /				 C. <				D. >

    // 17,以下能正确定义二维数组的是（  C    ）。
    //A． int a[][3];                     B. int a[][3]=2{2*3};
    //C.  int a[][3]={{1},{2},{3,4}};     D.int a[2][3]={{1},{2},{3,4}};

    // int a[][3] = {{1}, {2}, {3, 4}};
    // for (int i = 0; i < 3; ++i)
    // {
    //     for (int j = 0; j < 3; ++j)
    //     {
    //         printf("%-2d\x20", a[i][j]);
    //     }
    //     printf("\n");
    // }

    // 18,
    // int a = 3;
    // int b = 4;
    // int result = SUB(a += 2, b++);
    // printf("%d\n", result); // 1

    //19，

    //20,
    // int i;
    // int x[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // for (i = 0; i < 3; i++)
    // {
    //     printf("%d", x[i][1]); // 2,5,8
    // }

    // 二位数组 初始化
    // int a[7][7] = {{10}, {}, {}, {}, {}, {}, {}};

    // for (int i = 0; i < 7; i++)
    // {
    //     for (int j = 0; j < 7; j++)
    //     {

    //         int value = a[i][j];
    //         printf("%d \t", value);
    //     }
    //     printf("------ \n");
    // }

    /*
    10 	0 	0 	0 	0 	0 	0 	------ 
    0 	0 	0 	0 	0 	0 	0 	------ 
    0 	0 	0 	0 	0 	0 	0 	------ 
    0 	0 	0 	0 	0 	0 	0 	------ 
    0 	0 	0 	0 	0 	0 	0 	------ 
    0 	0 	0 	0 	0 	0 	0 	------ 
    0 	0 	0 	0 	0 	0 	0 	------ 
    */

    return 0;
}

// signed char c = 'A'; // 一个字符串转换成ASCII码算 A -> 65 a -> 97

// static 声明 变量默认值是0，否则默认值时一个随机数 不可控

// 二进制打印十进制数字
// printf("%d \n", 0b00000001);

// 强制类型转换
// printBinary((int)b);

void printfSizeOf()
{
    signed short a = 1; // 2
    short int b = 1;    // 2   short == short int （缩写）
    // short b = 1;     // 2
    int c = 1;           //4
    long int d = 1;      //4
    long long int e = 1; //8
    // 根据编译器不同 占据的空间也不同 在limits.h中定义
    // 书中long int 为4字节
    // vscode中sizeof 为8字节
    printf("value: %d, sizeof: %lu \n", a, sizeof(a));
    printf("value: %d, sizeof: %lu \n", b, sizeof(b));
    printf("value: %d, sizeof: %lu \n", c, sizeof(c));
    printf("value: %ld, sizeof: %lu \n", d, sizeof(d));
    printf("value: %lld, sizeof: %lu \n", e, sizeof(e));
}