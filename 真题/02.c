#include <stdio.h>

int main()
{

    double total = 0;
    float count;

    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &count);
        total += count;
    }

    printf("total: %f", total);

    return 0;
}