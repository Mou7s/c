#include <stdio.h>

void quick_sort(int arr[], int left, int right)
{
    if (left < right)
    {
        int i = left, j = right, pivot = arr[left];
        while (i < j)
        {
            while (i < j && arr[j] >= pivot)
                j--;
            if (i < j)
                arr[i++] = arr[j];
            while (i < j && arr[i] <= pivot)
                i++;
            if (i < j)
                arr[j--] = arr[i];
        }
        arr[i] = pivot;
        quick_sort(arr, left, i - 1);
        quick_sort(arr, i + 1, right);
    }
}

int main()
{
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 6};
    int n = sizeof(arr) / sizeof(int);
    quick_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
