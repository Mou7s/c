#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int score;
    cin >> score;

    vector<int> grade_thresholds = {95, 90, 85, 80, 70, 60, 0};
    vector<int> grade_values = {1, 2, 3, 4, 5, 6, 7};

    auto iter = lower_bound(grade_thresholds.begin(), grade_thresholds.end(), score);
    int index = iter - grade_thresholds.begin();
    cout << grade_values[index];

    return 0;
}
