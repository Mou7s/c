#include <stdio.h>

unsigned long Fibonacci(unsigned n)
{
    if (n > 2)
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    else
        return 1;
}

int main(void)
{
    unsigned n;

    printf("请输入斐波那契数列的第几个数：");
    scanf("%u", &n);

    printf("斐波那契数列的第 %u 项是 %lu\n", n, Fibonacci(n));

    return 0;
}