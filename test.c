#include <stdio.h>
#include <math.h>
#define N 6
#define maxT 1000
int c[N][maxT] = {0};

int Memoized_Knapsack(int V[N], int w[N], int T)
{
    int i;
    int j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j <= T; j++)
        {
            c[i][j] = -1;
        }
    }
    return Calculate_Max_Value(V, w, N - 1, T);
}

int Calculate_Max_Value(int v[N], int w[N], int i, int j)
{
    int temp = 0;
    if (c[i][j] != -1)
    {
        return c[i][j];
    }
    if (i == 0 || j == 0)
    {
        c[i][j] = 0;
    }
    else
    {
        c[i][j] = Calculate_Max_Value(v, w, i - 1, j);
        if (w[i] <= j)
        {
            temp = v[i] + Calculate_Max_Value(v, w, i - 1, j - w[i]);
            if (c[i][j] < temp)
            {
                c[i][j] = temp;
            }
        }
    }
    return c[i][j];
}

int main()
{
    int V[N] = {60, 100, 120, 150, 200, 250};
    int w[N] = {10, 20, 30, 40, 50, 60};
    int T = 100;
    printf("Maximum value that can be obtained = %d", Memoized_Knapsack(V, w, T));
    return 0;
}
