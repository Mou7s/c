#include <iostream>
#include <string>

using namespace std;

int naive_match(const string &long_str, const string &target_str)
{
    int m = target_str.length();
    int n = long_str.length();
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (long_str[i + j] != target_str[j])
                break;
        }
        if (j == m)
            return i;
    }
    return -1;
}

int main()
{
    string long_str = "hello world";
    string target_str = "world";
    int pos = naive_match(long_str, target_str);
    if (pos != -1)
    {
        cout << "Target string found at position " << pos << endl;
    }
    else
    {
        cout << "Target string not found" << endl;
    }
    return 0;
}
