#include <bits/stdc++.h>
using namespace std;

map<char, int> m;
string s;
int n;

void TRY(string x)
{
    if (x.size() == n)
        cout << x << "\n";
    else
    {
        for (auto &f : m)
        {
            if (f.second > 0)
            {
                f.second--;
                TRY(f.first + x);
                f.second++;
            }
        }
    }
}

int main()
{

    cin >> s;
    n = s.length();
    for (auto &c : s)
    {
        m[c]++;
    }
    TRY("");
}