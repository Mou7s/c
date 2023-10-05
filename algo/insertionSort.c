#include <stdio.h>

// 插入排序函数
void insertionSort(int nums[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        int currentElement = nums[i];

        while (j >= 0 && nums[j] > currentElement)
        {
            nums[j + 1] = nums[j];
            j--;
        }

        nums[j + 1] = currentElement;
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
