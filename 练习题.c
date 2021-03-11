#include <stdio.h>
#include <string.h>

void scanfAPointerByB()
{
    // int a = 10;      // a -> 数据：10
    // scanf("%d", &a); // &a -> a的地址
    // printf("%d \t", a);
    int a = 123, *b = &a;
    printf("输入a的值 \n");
    scanf("输入a的值： %d ", b);
    printf("a的值: %d \t ", a);

    // int a;
    // char b[10] = "1";
    // scanf("%2d %*2s %s", &a, b); // %*2s -> 如果是两个字符则不计入赋值计算，不是字符串不生效
    // printf("a: %d|\nb: %s|\n", a, b);
}

/* getchar */
void inputOneString()
{
    int a = 10;
    char b = getchar(); // 输入的字符，只取一个字符
    //输入 qwewr b = q
    printf("%c \n", b);
    char c = 'P';
    putchar(c); // 输出一个字符
}

void RealConstantWrite()
{

    // 书写。0.xxx可以不写0，正号可以省，负号不行
    double a = -.2E3;
    // double a = 123e5;
    // double a = 123E5;
    printf("%f \n", a); // -200
}

void charAndString()
{
    /*
    字符常量和字符串常量是不同的
    字符用 /c 只能是一个字符，以ASCII码存放，可以与整形计算，转换成ASCII码计算
    字符串用 /s
    */
    char a = 'a';   // a
    char b[] = "a"; // a\0 字符串后面结束表示符 \0所以长度+1
    printf("%c %d\n", a, a);
    printf("%c\n", 65);      // A
    printf("%c\n", '7' + 2); // 9
    printf("%s \n", b);
    printf("%lu, %lu \n", sizeof(a), sizeof(b)); // 1,2
    char s[] = "\\\"AAA\123\xAA\t";
    printf("%s sizeof: %lu \n", s, sizeof(s)); // 1,2
    printf("%c \n", '\123');                   //S
}

// void case1()
// {
//     char a = 'A';
//     int b = 20;
//     printf("%d,%o", (a = a + 1, a + b, b), a + 'a' - 'A', b);
//     // 20,142
// }

void case2()
{
    int x = 34;
    float y = 45.98;
    // %6d    -> 按照六位数输出，少于六位数左侧补空格
    printf("%6d , %6.2f \n", x, y); //    34 ,  45.98
    printf("%d , %.2f \n", x, y);   //34 , 45.98
    printf("%d , %.4f \n", x, y);   //34 , 45.9800
    // printf("%6D , %6.2F", x, y);// 书上说D和F不是正确的输出字符d和f才是所以应该输出%6D , %6.2F原样，当字符串打印
    // printf("%6DfD , %6.2FF", x, y);
}

void printfDemo()
{
    printf("%-4d| \n", 2); // 2   |
    printf("%04d| \n", 2); // 0002|
    printf("%4d| \n", 2);  //    2|
    printf("%d", 2);       // 2
}

// void stringCopy(char *str, char *temp)
// {
//     printf("wnm:%s \n", temp);
//     while (*str++ = *temp++)
//         ;
// }

double fac(int n)
{
    int i;
    double s = 1;
    for (i = 1; i <= n; i++)
        s = s * i;
    return s;
}

double sum(int n)
{
    int i;
    double s = 0;
    for (i = 1; i <= n; i++)
        s += fac(i);
    return s;
}

double multiplicativeOrder(int num)
{
    double count = 1;

    for (int i = num; i > 1; i--)
    {
        count *= i;
    }
    return count;
}

void case3(int number)
{
    //乘阶 3!= 3x2x1 2! = 2x1
    // 1～100的乘阶和
    double total = 0;
    for (int i = 1; i <= number; i++)
    {
        total += multiplicativeOrder(i);
    }
    printf("%d total: %f", number, total);
}

void case4()
{
    double sum = 1.0, fac = 1;
    int i, j;

    for (i = 2; i <= 5; i++)
    {
        fac = 1;
        for (j = 2; j <= i; j++)
        {
            fac *= j;
        }
        sum += fac;
    }
    printf("%1f", sum);
}

void getInputWordLength()
{
    char s[300];
    int total = 0;
    printf("Please enter a string...\n");
    fgets(s, 300, stdin);
    int newWord = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%d -> %d %c\n", i, s[i], s[i]);

        if (s[i] == 32)
        {
            newWord = 0;
        }
        else if (newWord == 0)
        {
            newWord = 1;
            total++;
        }
    }

    printf("total: %d\n", total);
}

void case555()
{
    // 指针迷惑考点
    char ch[] = "iamhandsome";
    char *p = ch;

    printf("%c ,%c \n", *(p + 2), *p + 2);
    printf("%s \n", p + 10);
    printf("%d", *p + 2);
    /*
     *p:105 -> 第一个字母'i'的ASCII码值
     *p + 2 = 105 + 2 = 107 107对应字母k
     *(p + 2) = m 解：ch数组顺序排列，+2就是向下移动两个从i移动到m位置，所以就是m，加几就像下移动几个
    */
}

void case666()
{
    char str[4][6] = {"ABCDE"};
    printf("%s", str); // ABCDE
    // char *s;
    // scanf("%s", s);
}

void case777()
{
    int a, *pa = &a;
    //A.scanf(“%d”,pa);
    //B.scanf(“%d”,a);
    //C.scanf(“%d”,&pa);
    //D.scanf(“%d”,*pa);
    scanf("%d", pa);
    printf("%d \n", *pa);
}

int main()
{
    /*    指针，即地址    */

    // printf("%d", *p);// 105 -> 第一个字母i的ASCII码值

    // getInputWordLength();
    // char str[] = "Hello Hongbin 666";
    // char *p;
    // p = strtok(str, " ");
    // printf("%s \n", p);
    // while (p)
    // {
    //     printf("%s\n", p);
    //     p = strtok(NULL, " ");
    //     printf("---%s\n", p);
    // }

    // int num = 4;
    // double one = multiplicativeOrder(num);
    // printf("%f", one);

    // char str1[100], str2[] = "hongbin";
    // stringCopy(str1, str2);
    // printf("%s", str1);

    // char *a = "AAA";
    // char *b = "BBB";
    // printf("%s \n", a);// AAA
    // printf("%c", *a); // A
    // printf("%o", 97); // A

    return 0;
}
