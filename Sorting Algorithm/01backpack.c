#include <stdio.h>
#include <math.h>
#define N 6
#define maxT 1000

// 声明一个二维数组c，用于存储子问题的解
int c[N][maxT] = {0};

// 带备忘录的0/1背包问题
int Memoized_Knapsack(int V[N], int w[N], int T)
{
    int i;
    int j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j <= T; j++)
        {
            c[i][j] = -1; // 初始化备忘录
        }
    }
    return Calculate_Max_Value(V, w, N - 1, T);
}

// 递归计算最大价值
int Calculate_Max_Value(int v[N], int w[N], int i, int j)
{
    int temp = 0;
    if (c[i][j] != -1) // 如果已经计算过，直接返回结果
    {
        return c[i][j];
    }
    if (i == 0 || j == 0) // 边界条件
    {
        c[i][j] = 0;
    }
    else
    {
        c[i][j] = Calculate_Max_Value(v, w, i - 1, j); // 不选第i个物品
        if (w[i] <= j)                                 // 当第i个物品的重量小于等于背包容量时，可以尝试选择第i个物品
        {
            temp = v[i] + Calculate_Max_Value(v, w, i - 1, j - w[i]); // 选第i个物品
            if (c[i][j] < temp)                                       // 取最大值
            {
                c[i][j] = temp;
            }
        }
    }
    return c[i][j];
}

int main()
{
    int V[N] = {60, 100, 120, 150, 200, 250};                                      // 物品的价值
    int w[N] = {10, 20, 30, 40, 50, 60};                                           // 物品的重量
    int T = 100;                                                                   // 背包的容量
    printf("Maximum value that can be obtained = %d", Memoized_Knapsack(V, w, T)); // 输出结果
    return 0;
}