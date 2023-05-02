#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int k;
    cin >> k;
    vector<int> nums(k);
    for (int i = 0; i < k; i++)
    {
        cin >> nums[i];
    }

    int one_count = 0, five_count = 0, ten_count = 0;
    for (int i = 0; i < k; i++)
    {
        if (nums[i] == 1)
        {
            one_count++;
        }
        else if (nums[i] == 5)
        {
            five_count++;
        }
        else if (nums[i] == 10)
        {
            ten_count++;
        }
    }

    cout << one_count << endl;
    cout << five_count << endl;
    cout << ten_count << endl;

    return 0;
}
