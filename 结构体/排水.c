#include <stdio.h>

#define total 1.0
#define maxTotal(x) (x > total ? total : x)

int main()
{
    /*
        综合编程题(16分)
        有一蓄水池,若蓄水池无水时,打开进水管需要x小时可以灌满;
        若蓄水池满水时,打开排水管需要y小时可以排空,且x<y,y<10。
        若当前蓄水池为空,同时打开进水管和排水管,请编写程序输入x和y的值,
        并将之后每个小时蓄水池的水量记录在一个数组中,直到蓄水池被灌满,并按以下格式输出。
    */
    int x, y, time = 1;
    float progress[100];

    printf("Place enter values for x and y :");
    scanf("%d %d", &x, &y);

    double enterSpeed = 1.0 / x;
    double outerSpeed = 1.0 / y;

    while ((progress[time] = time * (enterSpeed - outerSpeed)) <= 1.0)
    {
        printf("after %d hour: %f \n", time, progress[time]);
        time++;
    }

    // if (progress[time - 1] < 1.0)
    // {
    //     progress[time] = 1.0;
    printf("after %d hour: %f \n", time, maxTotal(progress[time]));
    // }

    return 0;
}