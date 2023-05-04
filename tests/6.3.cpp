#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int h, r;
    cin >> h >> r;
    double pi = 3.14159;
    double volume = pi * r * r * h;
    int count = ceil(20000 / volume);
    cout << count << endl;
    return 0;
}