#include <stdio.h>

// 二分查找插入点函数
int binarySearchInsert(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            // 如果找到了重复元素，返回该位置
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    // 如果没有找到元素，返回插入点位置
    return left;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int insertPoint = binarySearchInsert(arr, n, target);

    printf("要插入的元素 %d 应该插入到位置 %d\n", target, insertPoint);

    return 0;
}
