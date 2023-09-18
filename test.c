#include <stdio.h>
#include <limits.h>

int uadd_ok(unsigned a, unsigned b)
{
    // 检查无符号整数相加是否溢出
    if (a < UINT_MAX - b)
    {
        return 1; // 没有溢出
    }
    else
    {
        return 0; // 溢出
    }
}

int main()
{
    unsigned int num1 = 20090000000; // 一个较大的无符号整数
    unsigned int num2 = 300000000;   // 另一个较大的无符号整数

    if (uadd_ok(num1, num2))
    {
        printf("没有溢出\n");
    }
    else
    {
        printf("溢出\n");
    }

    return 0;
}
