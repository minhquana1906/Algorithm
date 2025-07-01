#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, x, c = 10, res = -10, sum = 0;
    cin >> n >> c;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        sum += x;
        x = x ? -1 : 0;
        c = (c > 0 ? c : 0) + x;
        res = max(res, c);
    }
    cout << res;
}