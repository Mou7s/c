#include <iostream>
using namespace std;
int main()
{
    int a, min, max;
    cin >> a;
    if (a % 2 == 0)
    {
        max = a / 2;
        if (a % 4 == 0)
        {
            min = a / 4;
        }
        else
        {
            min = a / 4;
        }
    }
    else
    {
        return false;
    }

    cout << min << " " << max << endl;
    return 0;
}
