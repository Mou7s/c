#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    char a[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    cout << "first five letters:" << endl;
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}