#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

set<ll> luckyNumber;

void generateNum(ll num, int four, int seven)
{
    if (num > 1e10)
        return;
    if (seven == four)
        luckyNumber.insert(num);
    generateNum(num * 10 + 4, four + 1, seven);
    generateNum(num * 10 + 7, four, seven + 1);
}

int main()
{
    ll n;
    cin >> n;
    generateNum(0, 0, 0);
    for (auto &x : luckyNumber)
    {
        if (x >= n)
        {
            cout << x;
            return 0;
        }
    }
}