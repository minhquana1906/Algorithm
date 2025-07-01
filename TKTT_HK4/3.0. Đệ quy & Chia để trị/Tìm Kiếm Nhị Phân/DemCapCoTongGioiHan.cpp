#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, m, res = 0;
    cin >> n >> m;
    int a[n];
    for (int &x : a)
        cin >> x;
    sort(a, a + n);

    for (int i = 1; i < n; i++)
    {
        res += upper_bound(a, a + i, m - a[i]) - a;
    }
    cout << res;
}