#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int age;
    int counts[4] = {0}; // 使用数组来存储各个年龄段的病人数量
    for (int i = 0; i < n; i++)
    {
        cin >> age;
        if (age <= 18)
        {
            counts[0]++;
        }
        else if (age <= 35)
        {
            counts[1]++;
        }
        else if (age <= 60)
        {
            counts[2]++;
        }
        else
        {
            counts[3]++;
        }
    }

    double total = n;                                     // 总人数等于过往病人的数量
    string labels[4] = {"1-18", "19-35", "36-60", "60-"}; // 使用数组来存储各个年龄段的标签
    for (int i = 0; i < 4; i++)
    {
        double percentage = counts[i] / total * 100;
        cout << labels[i] << ": " << fixed << setprecision(2) << percentage << "%" << endl;
    }

    return 0;
}
