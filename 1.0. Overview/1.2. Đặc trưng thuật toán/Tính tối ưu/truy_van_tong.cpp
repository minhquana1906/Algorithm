// Truy vấn tổng
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long m, n, res = 0;
    cin >> n >> m;
    long a[n + 5] = {};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    while (m--)
    {
        long l, r;
        cin >> l >> r;
        cout << (a[r] - a[l - 1]) << endl;
    }
}