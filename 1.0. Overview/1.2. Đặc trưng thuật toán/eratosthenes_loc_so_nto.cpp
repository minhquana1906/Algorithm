#include <bits/stdc++.h>
using namespace std;

vector<int> Sang(int n)
{
    bool s[n + 5] = {};
    fill(s + 2, s + n + 1, 1);
    vector<int> res;
    for (int i = 2; i <= n; i++)
    {
        if (s[i])
        {
            res.push_back(i);
            for (int j = i * i; j <= n; j += i)
                s[j] = 0;
        }
    }
    return res;
}

int main()
{
    vector<int> P = Sang(1000);
    for (auto p : P)
        cout << p << " ";
}