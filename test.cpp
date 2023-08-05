#include <stdarg.h>
#include <stdio.h>

void test(int tot, ...)
{
    va_list valist;
    int i;

    // 初始化可变参数列表
    va_start(valist, tot);

    for (i = 0; i < tot; ++i)
    {
        // 获取第 i 个变量的值
        double xx = va_arg(valist, double); // Correct
        // float xx = va_arg(valist, float); // Wrong

        // 输出第 i 个变量的底层存储内容
        printf("i = %d, value = 0x%016llx\n", i, *(long long *)(&xx));
    }

    // 清理可变参数列表的内存
    va_end(valist);
}

int main()
{
    float f;
    double fd, d;
    f = 123.;  // 0x42f60000
    fd = 123.; // 0x405ec00000000000
    d = 456.;  // 0x407c800000000000
    test(3, f, fd, d);
}
