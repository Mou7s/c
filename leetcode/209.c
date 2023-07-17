#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int minSubArrayLen(int target, int *nums, int numsSize)
{

    int sum = 0;
    int length = 0;
    int minLength = INT_MAX; // 初始化为最大值

    for (int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
        length++;

        while (sum >= target) // 使用循环来收缩窗口
        {
            minLength = (length < minLength) ? length : minLength;
            sum -= nums[i - length + 1];
            length--;
        }
    }

    return (minLength != INT_MAX) ? minLength : 0; // 如果找到了满足条件的子数组，返回最小长度，否则返回0
}
