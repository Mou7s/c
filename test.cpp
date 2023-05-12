#include <iostream>
#include <string>
#include <vector>

using namespace std;

void getNext(const string &pattern, vector<int> &next)
{
    int n = pattern.size();
    next[0] = -1;
    int i = 0, j = -1;
    while (i < n - 1)
    {
        if (j == -1 || pattern[i] == pattern[j])
        {
            ++i;
            ++j;
            next[i] = j;
        }
        else
        {
            j = next[j];
        }
    }
}

int kmp(const string &text, const string &pattern)
{
    int n = text.size();
    int m = pattern.size();
    vector<int> next(m, 0);
    getNext(pattern, next);
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (j == -1 || text[i] == pattern[j])
        {
            ++i;
            ++j;
        }
        else
        {
            j = next[j];
        }
    }
    if (j == m)
    {
        return i - j;
    }
    else
    {
        return -1;
    }
}

int main()
{
    string text = "hello world";
    string pattern = "world";
    int pos = kmp(text, pattern);
    if (pos != -1)
    {
        cout << "Found pattern at position " << pos << endl;
    }
    else
    {
        cout << "Pattern not found" << endl;
    }
    return 0;
}
