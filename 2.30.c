// 检测补码加法中的溢出
#include <stdio.h>

void tadd_ok(int x, int y)
{
    int sum = x + y;
    if (x > 0 && y > 0 && sum < 0)
    {
        printf("%d + %d = ", x, y);
        printf("positive overflow\n");
    }
    if (x < 0 && y < 0 && sum >= 0)
    {
        printf("%d + %d = ", x, y);
        printf("negative overflow\n");
    }
}

int main()
{
    int x = 2147483647; // 最大的正数
    int y = 1;
    tadd_ok(x, y); // 输出：2147483647 + 1 = positive overflow

    x = -2147483648; // 最小的负数
    y = -1;
    tadd_ok(x, y); // 输出-2147483648 + -1 = negative overflow

    return 0;
}
