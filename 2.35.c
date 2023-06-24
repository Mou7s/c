//判断乘法是否产生溢出
#include <stdio.h>
#include <stdbool.h>

bool tmult_ok(int x, int y)
{
    int p = x * y;
    return !x || p / x == y;
    // true: no overflow 
}

int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if (tmult_ok(x, y))
        printf("Multiplication does not overflow.\n");
    else
        printf("Multiplication overflows.\n");

    return 0;
}
