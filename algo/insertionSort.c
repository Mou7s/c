#include <stdio.h>

/* 插入排序 */

void insertionSort(int nums[], int size)
{
    // 外循环：已排序元素数量为 1, 2, ..., n
    for (int i = 1; i < size; i++)
    {
        int base = nums[i], j = i - 1;
        // 内循环：将 base 插入到已排序部分的正确位置
        while (j >= 0 && nums[j] > base)
        {
            // 将 nums[j] 向右移动一位
            nums[j + 1] = nums[j];
            j--;
        }
        // 将 base 赋值到正确位置
        nums[j + 1] = base;
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("未排序数组：\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    insertionSort(arr, n);

    printf("\n已排序数组：\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
