#include <stdio.h>

binarySearch(int arr[], int left, int right, int target)
{

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        if (target > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
}
int main()
{
    int arr[10] = {0, 1, 6, 10, 23, 34, 100, 177, 296, 999};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Input an integer: ");
    scanf("%d", &target);
    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
    {
        printf("目标元素 %d 在数组中的索引是 %d\n", target, result);
    }
    else
    {
        printf("目标元素 %d 不在数组中\n", target);
    }
    return 0;
}
