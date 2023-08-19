#include <stdio.h>
#include "./sortingAlgorithm/compare.h"

int main()
{
    int array[] = {9, 4, 7, 2, 1, 8, 5, 3, 6};   // 待排序的数组
    int size = sizeof(array) / sizeof(array[0]); // 数组大小

    printf("Original array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    // 使用 qsort 函数进行排序
    qsort(array, size, sizeof(array[0]), compare);

    printf("\nSorted array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
