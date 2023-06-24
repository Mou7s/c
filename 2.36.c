// 对于数据类型int为32为的情况，设计一个版本的tmult_ok函数，使用64位精度的数据类型int64_t，而不使用除法。
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

int tmult_ok(int x, int y)
{
    int64_t product = (int64_t)x * y;
    int32_t upper = product >> 32;                            // 获取高32位
    int32_t lower = (int32_t)product;                         // 获取低32位
    return (upper == 0 || upper == -1) && (lower == product); // 检查溢出情况
    // 原理：如果溢出发生，乘积的高 32 位不可能同时等于 0 和 -1，或者低 32 位的值不可能与原始乘积相等。
}

int main()
{
    int32_t x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if (tmult_ok_32bit(x, y))
        printf("Multiplication does not overflow.\n");
    else
        printf("Multiplication overflows.\n");

    return 0;
}
