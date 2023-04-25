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
    int n, arr[500]; 
    scanf("%d", &n);  
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubblesort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
