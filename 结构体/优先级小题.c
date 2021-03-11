#include <stdio.h>

struct stu
{
    int id;
    char *name;
} group[2] = {
    {1, "aa"},
    {2, "bb"}},
  *p = group;

int main()
{
    printf("%d \n", (++p)->id); // => 2 先p移一位到第二项，然后取第二项的id值
    // printf("%d \n", --p->id);//=> 0 先得到p->id再--
    // printf("%d \n", ++p->id);//=> 2 先得到p->id再++
    return 0;
}