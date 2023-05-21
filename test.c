#include <stdio.h>

// 合并两个有序子数组
void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    // 创建临时数组
    int L[n1], R[n2];

    // 将左半部分复制到 L 数组
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }

    // 将右半部分复制到 R 数组
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1 + j];
    }

    int i = 0; // 初始化左半部分的索引
    int j = 0; // 初始化右半部分的索引
    int k = l; // 初始化合并后的数组的索引

    // 合并左右两个有序序列
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // 将剩余的元素复制到 arr 数组
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// 归并排序
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // 找到中间点
        int m = (l + r) / 2;

        // 递归地排序左半部分
        mergeSort(arr, l, m);

        // 递归地排序右半部分
        mergeSort(arr, m + 1, r);

        // 合并左右两个有序序列
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("原始数组：\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // 对数组进行归并排序
    mergeSort(arr, 0, n - 1);

    printf("\n排序后的数组：\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
