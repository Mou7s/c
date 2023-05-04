#include <iostream>

int main()
{
    using namespace std;
    int num, a, b, c;
    cin >> num;
    c = num % 10;
    b = ((num - c) % 100) / 10;
    a = ((num - c - b) % 1000) / 100;
    cout << a << endl
         << b << endl
         << c << endl;
    return 0;
}
