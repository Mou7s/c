#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int knapsack(int W, int wt[], int val[], int n)
{
    int i, w;
    int **K = (int **)malloc((n + 1) * sizeof(int *));
    for (i = 0; i <= n; i++)
    {
        K[i] = (int *)malloc((W + 1) * sizeof(int));
    }

    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
            {
                K[i][w] = 0;
            }
            else if (wt[i - 1] <= w)
            {
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            }
            else
            {
                K[i][w] = K[i - 1][w];
            }
        }
    }

    int result = K[n][W];

    for (i = 0; i <= n; i++)
    {
        free(K[i]);
    }
    free(K);

    return result;
}

int main()
{
    int val[] = {60, 100, 120};           // value
    int wt[] = {10, 20, 30};              // weight
    int W = 50;                           // capacity
    int n = sizeof(val) / sizeof(val[0]); // num;
    printf("Maximum value that can be obtained = %d", knapsack(W, wt, val, n));
    return 0;
}
