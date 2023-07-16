#include <stdio.h>

int search(int *nums, int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (target < nums[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;
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