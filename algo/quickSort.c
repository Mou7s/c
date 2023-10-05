#include <stdio.h>

// 交换两个元素的值
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 分区函数，选择一个枢纽元素，将数组分为两部分，左边小于枢纽，右边大于枢纽
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // 选择最后一个元素作为枢纽
    int i = low - 1;       // i表示小于枢纽的元素的索引

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]); // 将枢纽元素放到正确的位置
    return i + 1;                  // 返回枢纽元素的索引
}

// 快速排序函数
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high); // 找到枢纽元素的索引

        // 递归地对枢纽元素左右两边的子数组进行排序
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
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

    quickSort(arr, 0, n - 1);

    printf("\n已排序数组：\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
