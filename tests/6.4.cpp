#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max_score = 0;
    for (int i = 0; i < n; i++)
    {
        int score;
        cin >> score;
        max_score = max(max_score, score);
    }
    cout << max_score << endl;
    return 0;
}