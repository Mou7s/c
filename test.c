#include <stdio.h>
#include <stdlib.h>

/**
 * 希尔排序
 * @param data 待排序数组
 * @param n 数组长度
 */
void shellSort(int data[], int n)
{
    int i, j, gap, temp;
    for (gap = n / 2; gap > 0; gap /= 2)
    {
        for (i = gap; i < n; i++)
        {
            temp = data[i];
            for (j = i; j >= gap && data[j - gap] > temp; j -= gap)
            {
                data[j] = data[j - gap];
            }
            data[j] = temp;
        }
    }
}

int main()
{
    int data[] = {12, 34, 54, 2, 3, 4, 6, 8};
    int n = sizeof(data) / sizeof(data[0]);

    printf("Array before sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }

    shellSort(data, n);

    printf("\nArray after sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}