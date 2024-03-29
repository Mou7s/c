#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int find_kth_largest(int arr[], int n, int k)
{
    qsort(arr, n, sizeof(int), cmp);
    return arr[k - 1];
}

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int kth_largest = find_kth_largest(arr, n, k);
    printf("%d\n", kth_largest);
    return 0;
}
