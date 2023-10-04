#include <stdio.h>
int binarySearch(int arr[], int target)
{
    int size = sizeof(arr) / sizeof(arr[0]);

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else if (arr[mid] > target)
        {
            right = mid - 1;
        }
    }
}
int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = binarySearch(arr, target);

    if (result != -1)
    {
        printf("目标值 %d 找到在索引 %d 处。\n", target, result + 1);
    }
    else
    {
        printf("目标值 %d 未找到。\n", target);
    }

    return 0;
}