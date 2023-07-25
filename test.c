#include <stdio.h>

double calculateAverage(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i); // Equivalent to arr[i]
    }
    return (double)sum / n;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    double average = calculateAverage(arr, n);
    printf("%.2lf\n", average);

    return 0;
}
