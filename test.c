// 有问题的版本
#include <stdio.h>
int main()
{
    long long sum = 0.0f;
    for (int i = 0; i < 10000; i++)
        sum += i + 1;
    printf("Sum: %lld\n", sum);
    return 0;
}
// 1 + 2 + 3 + … + 10000 = 10000 * (10000 + 1) / 2 = 50005000 ?
