#include <bits/stdc++.h>
using namespace std;

set<string> res;

void lietKe(string x)
{
    if (x == "")
        return;
    if (res.find(x) == res.end())
    {
        res.insert(x);
        lietKe(x.substr(0, x.size() - 1));
        lietKe(x.substr(1, x.size() - 1));
    }
}

int main()
{
    string s;
    cin >> s;
    lietKe(s);
    for (auto n : res)
    {
        cout << n << '\n';
    }
}