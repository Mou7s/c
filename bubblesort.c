#include <stdio.h>

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int temp, j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n, arr[1000]; // total n number,n<1000.a for save these number
    scanf("%d", &n);  // input length of numbers
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubblesort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
