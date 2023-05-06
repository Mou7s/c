#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            break;
        }
        vector<int> monkeys(n);
        for (int i = 0; i < n; i++)
        {
            monkeys[i] = i + 1;
        }
        int current = 0;
        while (monkeys.size() > 1)
        {
            current = (current + m - 1) % monkeys.size();
            monkeys.erase(monkeys.begin() + current);
        }
        cout << monkeys[0] << endl;
    }
    return 0;
}
