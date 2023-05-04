#include <iostream>
using namespace std;
int main()
{
    int num, a, b, c;
    cin >> num;
    c = num % 10;
    b = (num - a) % 100;
    a = (num - a - b) % 1000;
    cout << a << endl
         << b << endl
         << c << endl;
    return 0;
}