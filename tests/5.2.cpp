#include <iostream>
using namespace std;
int main()
{
    int m, n, result = 0;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            result = result + i;
        }
    }

    cout << result << endl;
    return 0;
}