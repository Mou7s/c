#include <stdio.h>

int main()
{
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    int eaten = y / x;         // 计算虫子能吃掉的苹果数
    int remaining = n - eaten; // 剩下的完整苹果数
    if (y % x != 0)
    {                // 如果虫子不能完全吃掉一颗苹果
        remaining--; // 剩下的完整苹果数减一
    }
    printf("%d\n", remaining); // 输出剩下的完整苹果数
    return 0;
}
