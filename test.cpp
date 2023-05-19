#include <iostream>
using namespace std;

bool check(int arr[], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        if (arr[i] == col || abs(arr[i] - col) == row - i)
        {
            return false;
        }
    }
    return true;
}

void dfs(int arr[], int row, int n, int &count)
{
    if (row == n)
    {
        count++;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (check(arr, row, i))
        {
            arr[row] = i;
            dfs(arr, row + 1, n, count);
            arr[row] = 0;
        }
    }
}

int main()
{
    int n;
    cout << "请输入皇后数量：";
    cin >> n;
    int arr[n] = {0};
    int count = 0;
    dfs(arr, 0, n, count);
    cout << "共有 " << count << " 种放置方法。" << endl;
    return 0;
}
