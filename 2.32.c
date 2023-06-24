// 检测补码减法中的溢出
#include <stdio.h>

int tadd_ok(int x, int y)
{
    int sum = x + y;
    int neg_over = x < 0 && y < 0 && sum >= 0;
    int pos_over = x >= 0 && y >= 0 && sum < 0;
    return !neg_over && !pos_over;
}

int tsub_ok(int x, int y)
{
    return tadd_ok(x, -y);
    // 不产生溢出返回1
}

int main()
{
    int x = 2147483647; // 最大的正数
    int y = 1;
    if (tadd_ok(x, y))
    {
        printf("%d + %d = no overflow\n", x, y);
    }
    else
    {
        printf("%d + %d = overflow\n", x, y);
    }

    x = -2147483648; // 最小的负数
    y = -1;
    if (tsub_ok(x, y))
    {
        printf("%d - %d = no overflow\n", x, y);
    }
    else
    {
        printf("%d - %d = overflow\n", x, y);
    }

    return 0;
}
