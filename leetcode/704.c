#include <stdio.h>

int search(int *nums, int numsSize, int target)
{

    // 数组为空，直接返回 -1
    if (numsSize == 0)
    {
        return -1;
    }

    int left = 0;
    int right = numsSize - 1;

    while (left < right)
    {
        int mid = left + ((right - left) >> 1); // 计算中间索引，使用位运算替代除以2
        if (nums[mid] == target)
        {
            return mid; // 找到目标元素，返回索引
        }
        else if (target < nums[mid])
        {
            right = mid - 1; // 目标元素在左半部分，更新右边界
        }
        else
        {
            left = mid + 1; // 目标元素在右半部分，更新左边界
        }
    }

    if (nums[left] == target)
    {
        return left; // 检查最后一个元素是否是目标元素
    }

    return -1; // 目标元素不存在，返回 -1
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    int target = 3;
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = search(nums, numsSize, target);

    if (result != -1)
    {
        printf("Target %d found at index %d\n", target, result);
    }
    else
    {
        printf("Target %d not found\n", target);
    }

    return 0;
}