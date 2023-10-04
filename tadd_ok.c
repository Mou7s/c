#include <stdio.h>

int tadd_ok(int x, int y)
{
    // 计算x和y的和
    int sum = x + y;

    // 检查溢出情况
    if ((x > 0 && y > 0 && sum <= 0) || (x < 0 && y < 0 && sum >= 0))
    {
        return 0; // 溢出情况
    }
    else
    {
        return 1; // 没有溢出
    }
}

int main()
{
    int x = 2147483647; // 最大的正整数
    int y = 1;

    if (tadd_ok(x, y))
    {
        printf("相加不会产生溢出\n");
    }
    else
    {
        printf("相加会产生溢出\n");
    }

    return 0;
}
