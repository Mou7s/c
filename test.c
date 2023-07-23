#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) == 1)
    {
        int hundreds = n / 100;    // 百位数
        int tens = (n % 100) / 10; // 十位数
        int ones = n % 10;         // 个位数

        printf("%d%d%d\n", ones, tens, hundreds);
    }

    return 0;
}
