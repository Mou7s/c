#include <stdio.h>
#include <stdlib.h>

void backtrack(int **board, int n, int row, int *col, int *dia1, int *dia2, int *count)
{
    if (row == n)
    {
        (*count)++;
        printf("Solution %d:\n", *count);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", board[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!col[i] && !dia1[row + i] && !dia2[row - i + n - 1])
        {
            board[row][i] = 1;
            col[i] = 1;
            dia1[row + i] = 1;
            dia2[row - i + n - 1] = 1;
            backtrack(board, n, row + 1, col, dia1, dia2, count);
            board[row][i] = 0;
            col[i] = 0;
            dia1[row + i] = 0;
            dia2[row - i + n - 1] = 0;
        }
    }
}

int main()
{
    int n = 4;
    int **board = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        board[i] = (int *)calloc(n, sizeof(int));
    }
    int *col = (int *)calloc(n, sizeof(int));
    int *dia1 = (int *)calloc(2 * n - 1, sizeof(int));
    int *dia2 = (int *)calloc(2 * n - 1, sizeof(int));
    int count = 0;
    backtrack(board, n, 0, col, dia1, dia2, &count);
    printf("Total solutions: %d\n", count);
    return 0;
}
