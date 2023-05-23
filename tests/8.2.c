#include <stdio.h>

int main()
{
    int n, distance, bike_time, walk_time;

    scanf("%d", &n); // 读取待处理数据的数量

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &distance); // 读取行走距离

        bike_time = 27 + 23 + (distance / 3); // 计算骑车所需时间
        walk_time = distance / 1.2;           // 计算步行所需时间

        if (bike_time < walk_time)
        {
            printf("Bike\n"); // 骑车更快
        }
        else if (bike_time > walk_time)
        {
            printf("Walk\n"); // 步行更快
        }
    }
    return 0;
}
