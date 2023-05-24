#include <stdio.h>
#define MAXN 101

int main()
{
    int a[MAXN], n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    m %= n;
    for (int i = n - m; i < n; i++)
        printf("%d ", a[i]);
    for (int i = 0; i < n - m; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
