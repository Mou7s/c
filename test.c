// 计算最长公共子串
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int c[50][50];
int maxi;
int maxj;

int lcs(char *x, int m, char *y, int n)
{
    int i, j;
    int max = 0;
    maxi = maxj = 0;
    for (i = 0; i <= m; i++)
        c[i][0] = 0;
    for (j = 0; j <= n; j++)
        c[0][j] = 0;
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
        {
            if (x[i - 1] == y[j - 1])
            {
                c[i][j] = c[i - 1][j - 1] + 1;
                if (c[i][j] > max)
                {
                    max = c[i][j];
                    maxi = i;
                    maxj = j;
                }
            }
            else
                c[i][j] = 0;
        }
    return max;
}

int main()
{
    char x[50], y[50];
    int m, n;
    int i, j;
    int max;
    printf("Input string x:\n");
    scanf("%s", x);
    printf("Input string y:\n");
    scanf("%s", y);
    m = strlen(x);
    n = strlen(y);
    max = lcs(x, m, y, n);
    printf("The longest common substring is:\n");
    for (i = maxi - max; i < maxi; i++)
        printf("%c", x[i]);
    printf("\n");
    return 0;
}