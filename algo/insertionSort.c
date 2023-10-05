#include <stdio.h>

// 插入排序函数
void insertionSort(int nums[], int size)
{
    // 外层循环从第二个元素开始，因为第一个元素默认已经是有序的
    for (int i = 1; i < size; i++)
    {
        int currentElement = nums[i]; // 保存当前需要插入的元素
        int j = i - 1;                // j用于在已排序部分查找合适的位置

        // 在已排序部分寻找合适的插入位置
        while (j >= 0 && nums[j] > currentElement)
        {
            nums[j + 1] = nums[j]; // 将大于currentElement的元素后移一位
            j--;
        }

        // 将currentElement插入到合适的位置
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
