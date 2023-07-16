#include <stdio.h>

int removeElement(int *nums, int numsSize, int val)
{

    int i = 0; // 指针 i 指向新数组的末尾

    for (int j = 0; j < numsSize; j++)
    {
        if (nums[j] != val)
        {
            nums[i] = nums[j]; // 将不等于 val 的元素覆盖到指针 i 的位置
            i++;               // 指针 i 向后移动一位
        }
    }

    return i; // 返回新数组的长度
}

int main()
{
    int nums[] = {3, 2, 2, 3, 4, 5};               // 原始数组
    int numsSize = sizeof(nums) / sizeof(nums[0]); // 数组大小
    int val = 3;                                   // 需要移除的值

    for (int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    int newLength = removeElement(nums, numsSize, val);

    for (int i = 0; i < newLength; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}