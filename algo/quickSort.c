#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quicksort(int *array, int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int pivot = array[low];
    int i = low + 1;
    int j = high;

    while (i <= j)
    {
        while (array[i] < pivot)
        {
            i++;
        }

        while (array[j] > pivot)
        {
            j--;
        }

        if (i <= j)
        {
            swap(&array[i], &array[j]);
            i++;
            j--;
        }
    }

    quicksort(array, low, j);
    quicksort(array, i, high);
}

int main()
{
    int array[] = {5, 2, 4, 7, 1, 3, 6};
    int n = sizeof(array) / sizeof(array[0]);

    quicksort(array, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
s