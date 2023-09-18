#include <stdio.h>
#include <stdbool.h>

bool uadd_ok(unsigned int x, unsigned int y)
{
    unsigned int sum = x + y;
    return sum >= x; // 如果sum大于等于x，就没有发生溢出
}

int main()
{
    unsigned int a = 4000000000; // 一个大的无符号整数
    unsigned int b = 3000000000; // 另一个无符号整数
    if (uadd_ok(a, b))
    {
        printf("相加不会溢出\n");
    }
    else
    {
        printf("相加会溢出\n");
    }
    return 0;
}
