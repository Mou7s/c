#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)b - *(int *)a; // 降序排序
}

int minSubArrayLen(int target, int *nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), compare); // 对数组进行降序排序

    int sum = 0;
    int length = 0;

    for (int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
        length++;

        if (sum >= target)
        {
            return length;
        }
    }

    return 0; // 没有找到满足条件的子数组
}