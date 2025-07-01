#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int a[1000005], b[1000005], c[1000005], n;

ll snt(int l, int r)
{
    if (l == r - 1)
    {
        return 0;
    }
    int m = (l + r) / 2, i = 0, j = 0, k;
    ll s = snt(l, m) + snt(m, r);
    for (k = m - 1; k >= l; k--)
    {
        b[++i] = a[k];
    }
    for (k = r - 1; k >= m; k--)
    {
        c[++j] = a[k];
    }
    for (k = l; k < r; k++)
    {
        if (i > 0 && j > 0)
        {
            if (c[j] < b[i])
            {
                s += i;
                a[k] = c[j--];
            }
            else
            {
                a[k] = b[i--];
            }
        }
        else
        {
            a[k] = i > 0 ? b[i--] : c[j--];
        }
    }
    return s;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << snt(0, n);
}