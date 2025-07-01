#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000}, m, t = 0;
    cin >> m;
    if (m % 1000)
        return !printf("-1");
    for (auto x : a)
    {
        t += m / x;
        m %= x;

        cout << t << " " << m << endl;
    }
    // cout << t;
}