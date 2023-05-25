#include <stdio.h>
#include <stdlib.h>

// 归并排序的合并操作
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1; // 左半部分数组的长度
    int n2 = r - m;     // 右半部分数组的长度

    int L[n1], R[n2]; // 定义左右半部分数组

    // 将原数组分为左右两部分
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1 + j];
    }

    // 合并左右两个数组
    i = 0;
    j = 0;
    k = l;

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

    // 将左半部分数组剩余的元素加入原数组
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // 将右半部分数组剩余的元素加入原数组
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
        int m = l + (r - l) / 2;

        // 递归排序左半部分数组
        mergeSort(arr, l, m);

        // 递归排序右半部分数组
        mergeSort(arr, m + 1, r);

        // 合并左右两个有序数组
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    // 对数组进行归并排序
    mergeSort(arr, 0, arr_size - 1);

    // 输出排序后的数组
    printf("Sorted array: ");
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
