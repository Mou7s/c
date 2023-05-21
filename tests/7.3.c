#include <stdio.h>
#include <stdlib.h>

// 自定义比较函数，用于 qsort 排序
int cmp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

// 找出第 k 大的数
int find_kth_largest(int *nums, int numsSize, int k)
{
    // 对 nums 进行从大到小排序
    qsort(nums, numsSize, sizeof(int), cmp);

    // 返回第 k 大的数
    return nums[k - 1];
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    // 动态分配内存空间
    int *nums = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // 找出第 k 大的数并输出
    printf("%d", find_kth_largest(nums, n, k));

    // 释放内存空间
    free(nums);
    return 0;
}
