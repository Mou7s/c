#include <stdio.h>

long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1; // 基本情况
    }
    else
    {
        return factorial(n - 1) * n; // 递归调用
    }
}

int main()
{
    int num;
    printf("input number:");
    scanf("%d", &num);
    long long result = factorial(num);
    printf("%lld", result);
    return 0;
}
