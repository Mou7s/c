#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int a = numeric_limits<int>::min(); // 初始化最大奇数为int类型的最小值
    int b = numeric_limits<int>::max(); // 初始化最小偶数为int类型的最大值
    int num;
    for (int i = 0; i < 6; i++)
    {
        cin >> num;
        if (num % 2 == 0 && num < b)
        {
            b = num; // 更新最小偶数
        }
        else if (num % 2 == 1 && num > a)
        {
            a = num; // 更新最大奇数
        }
    }
    cout << abs(a - b) << endl; // 输出最大奇数与最小偶数之差的绝对值
    return 0;
}
