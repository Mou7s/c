#include <iostream>
using namespace std;
int main()
{
    int n, x, y, result;
    cin >> n >> x >> y;

    int eaten = y / x;
    int remaining = n - eaten;

    if (y % x != 0)
    {
        remaining--;
    }
    cout << remaining << endl;
    return 0;
}
