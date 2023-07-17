#include <stdio.h>
#include <stdlib.h>

int **generateMatrix(int n)
{
    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right)
    {
        // 上边
        for (int i = left; i <= right; i++)
        {
            matrix[top][i] = num++;
        }
        top++;

        // 右边
        for (int i = top; i <= bottom; i++)
        {
            matrix[i][right] = num++;
        }
        right--;

        // 下边
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                matrix[bottom][i] = num++;
            }
            bottom--;
        }

        // 左边
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                matrix[i][left] = num++;
            }
            left++;
        }
    }

    return matrix;
}

void printMatrix(int **matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void freeMatrix(int **matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}

int main()
{
    int n;
    // 请输入正整数n的值：
    scanf("%d", &n);

    int **matrix = generateMatrix(n);

    // 生成的螺旋矩阵为：
    printMatrix(matrix, n);

    freeMatrix(matrix, n);

    return 0;
}
