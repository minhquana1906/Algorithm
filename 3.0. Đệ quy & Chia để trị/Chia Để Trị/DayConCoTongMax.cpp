#include <bits/stdc++.h>
using namespace std;

long long a[100005], n;
long long submax(int l, int r)
{
    if (l == r - 1)
        return a[l];
    long long m = (l + r) / 2, x = a[m - 1], t = x, y = a[m], z = y;
    for (int i = m - 2; i >= l; i--)
    {
        t += a[i];
        x = max(x, t);
    }
    for (int i = m + 1; i < r; i++)
    {
        z += a[i];
        y = max(y, z);
    }
    return max({x + y, submax(l, m), submax(m, r)});
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << submax(0, n);
}