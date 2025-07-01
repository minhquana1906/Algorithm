#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, x, res = 0, c;
    cin >> n >> c;
    while (--n)
    {
        cin >> x;
        c = (c > 0 ? c : 0) + x;
        res = max(res, c);
    }
    cout << res;
}