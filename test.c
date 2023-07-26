#include <stdio.h>

int main()
{
    int m, n, sum = 0;

    scanf("%d %d", &m, &n);

    while (m <= n)
    {
        if (m % 17 == 0)
        {
            sum += m;
        }

        m++;
    }

    printf("%d", sum);
    return 0;
}
