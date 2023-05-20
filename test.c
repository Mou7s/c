#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int knapsack(int W, int wt[], int val[], int n)
{
    int dp[n + 1][W + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (wt[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - wt[i - 1]] + val[i - 1]);
            }
        }
    }
    return dp[n][W];
}

int main()
{
    int W = 50;
    int wt[] = {10, 20, 30};
    int val[] = {60, 100, 120};
    int n = sizeof(wt) / sizeof(wt[0]);
    int max_val = knapsack(W, wt, val, n);
    printf("The maximum value that can be put in a knapsack of capacity %d is %d\n", W, max_val);
    return 0;
}
