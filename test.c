#include <stdio.h>
#include <limits.h>

int tadd_ok(int x, int y)
{
    int sum = x + y;
    return (sum - x == y) && (sum - y == x);
}
int main()
{

    int x = INT_MAX; // 假设 INT_MAX 是系统中的最大正整数
    int y = 1;
    int sum = x + y;

    // 溢出发生，sum 的值变为 INT_MIN
    // (sum - x) 的结果将是 INT_MIN - INT_MAX，不等于 y
    // 因此，(sum - x == y) 不成立
    // 因此，整个表达式 (sum - x == y) && (sum - y == x) 为假
}
