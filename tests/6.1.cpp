#include <iostream>
using namespace std;

int main()
{
    int n; // n为细菌的数量
    // id为记录细菌的编号，rate为记录细菌的繁殖率，第i个细菌对应id[i]和rate[i]
    int id[100];
    double rate[100];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int initial, final;
        cin >> id[i] >> initial >> final;
        rate[i] = (double) final / initial;
    }

    // 对整个细菌排序
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (rate[j + 1] > rate[j])
            {
                int tmpId = id[j];
                id[j] = id[j + 1];
                id[j + 1] = tmpId;
            }
        }
    }
}