#include <stdio.h>
#include <stdlib.h>
#define LEN 100

/* 判断两个字符是否配对 */
int isMatch(char a, char b)
{
    if ((a == 'A' && b == 'U') || (a == 'U' && b == 'A'))
        return 1;
    if ((a == 'C' && b == 'G') || (a == 'G' && b == 'C'))
        return 1;
    return 0;
}

/* 求最大配对数 */
int RNA_2(char B[LEN], int n)
{
    int i, j, k, t;
    int max;
    int C[LEN][LEN] = {0};
    for (k = 5; k <= n; k++)
    {
        for (i = 1; i <= n - k + 1; i++)
        {
            j = i + k - 1;
            max = 0; // 初始化max
            for (t = i; t <= j - 4; t++)
            {
                if (isMatch(B[t], B[j]))
                {
                    if (max < C[i][t - 1] + 1 + C[t + 1][j - 1])
                        max = C[i][t - 1] + 1 + C[t + 1][j - 1];
                }
            }
            C[i][j] = max;
            printf("C[%d][%d] = %d\n", i, j, C[i][j]);
        }
    }
    return C[1][n]; // 返回最大配对数
}
