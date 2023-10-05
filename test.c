#include <stdio.h>

/* 选择排序 */

void selectSort(int nums[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (nums[j] < nums[min])
            {
                min = j;
            }
        }

        // 交换最小值和当前位置的元素
        int temp = nums[i];
        nums[i] = nums[min];
        nums[min] = temp;
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

    selectSort(arr, n);

    printf("\n已排序数组：\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
