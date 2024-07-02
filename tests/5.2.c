#include <stdio.h>
int main()
{
    // calculates the sum of all odd integers between m and n (inclusive).
    int m, n, result = 0;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            result = result + i;
        }
    }

    printf("%d\n", result);
    return 0;
}
