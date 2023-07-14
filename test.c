#include <stdio.h>

int *twoSum(int *nums, int numsSize, int target)
{
    int i, j;
    int *result = malloc(2 * sizeof(int));

    for (i = 0; i < numsSize; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    return NULL;
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int *result;

    result = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target);

    if (result != NULL)
    {
        printf("The two numbers that sum to %d are %d and %d.\n", target, result[0], result[1]);
    }
    else
    {
        printf("No two numbers in the array sum to %d.\n", target);
    }

    return 0;
}