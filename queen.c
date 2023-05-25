#include <stdio.h>
#include <stdlib.h>

#define N 6 // 定义N，即棋盘大小

int queen[N]; // 存放每行皇后所在列的数组

void print_solution() // 打印解决方案
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (queen[i] == j)
            {
                printf("Q ");
            }
            else
            {
                printf(". ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

int is_valid(int row, int col) // 判断是否可以放置皇后
{
    int i;
    for (i = 0; i < row; i++)
    {
        if (queen[i] == col || abs(queen[i] - col) == abs(i - row))
        {
            return 0;
        }
    }
    return 1;
}

void solve(int row) // 解决N皇后问题
{
    int col;
    if (row == N)
    { // 找到一组解决方案
        print_solution();
        return;
    }
    for (col = 0; col < N; col++)
    {
        if (is_valid(row, col))
        {                     // 如果可以放置皇后
            queen[row] = col; // 记录皇后所在列
            solve(row + 1);   // 递归处理下一行
        }
    }
}

int main()
{
    solve(0); // 从第0行开始解决N皇后问题
    return 0;
}
