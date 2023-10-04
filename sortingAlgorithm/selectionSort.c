#include <stdio.h>

// 选择排序函数
void selectionSort(int arr[], int n)
{
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++)
    {
        // 假设当前未排序部分的第一个元素为最小值
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            // 如果找到比当前最小值更小的元素，则更新最小值的索引
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // 将最小值与当前未排序部分的第一个元素交换位置
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("原始数组：\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, n);

    printf("排序后的数组：\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
