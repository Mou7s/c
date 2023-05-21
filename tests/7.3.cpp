#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 自定义比较函数，用于 sort 排序
bool cmp(int a, int b)
{
    return a > b;
}

// 找出第 k 大的数
int findKthLargest(vector<int> &nums, int k)
{
    // 对 nums 进行从大到小排序
    sort(nums.begin(), nums.end(), cmp);

    // 返回第 k 大的数
    return nums[k - 1];
}

int main()
{
    int n, k;
    cin >> n >> k;

    // 读入 n 个整数
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // 找出第 k 大的数并输出
    cout << findKthLargest(nums, k);

    return 0;
}
