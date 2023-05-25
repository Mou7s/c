#include <stdio.h>

// 定义背包容量和物品数量的常量
#define MAX_WEIGHT 50
#define NUM_ITEMS 10

// 定义物品的结构体
struct Item
{
    int weight; // 物品重量
    int value;  // 物品价值
};

// 计算两个整数中的最大值
int max(int a, int b)
{
    return (a > b) ? a : b;
}

// 计算01背包问题的最大价值
int knapsack(struct Item items[], int n)
{
    int i, w;
    int K[n + 1][MAX_WEIGHT + 1];

    // 填充K[][]表格
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= MAX_WEIGHT; w++)
        {
            if (i == 0 || w == 0)
            {
                K[i][w] = 0;
            }
            else if (items[i - 1].weight <= w)
            {
                K[i][w] = max(items[i - 1].value + K[i - 1][w - items[i - 1].weight], K[i - 1][w]);
            }
            else
            {
                K[i][w] = K[i - 1][w];
            }
        }
    }

    // 返回最大价值
    return K[n][MAX_WEIGHT];
}

int main()
{
    // 初始化物品数组
    struct Item items[NUM_ITEMS] = {
        {10, 60},
        {20, 100},
        {30, 120},
        {40, 140},
        {50, 160},
        {10, 60},
        {20, 100},
        {30, 120},
        {40, 140},
        {50, 160}};

    // 计算最大价值并输出结果
    int max_value = knapsack(items, NUM_ITEMS);
    printf("Maximum value: %d\n", max_value);

    return 0;
}
