#include <stdio.h>

int main()
{
    unsigned int x = 4294967295; // 2^32 - 1，无符号整数的最大值
    unsigned int y = x + 1;      // 溢出

    printf("x: %u\n", x);
    printf("y: %u\n", y);

    return 0;
}
