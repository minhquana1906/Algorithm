#include <bits/stdc++.h>
using namespace std;

int mymax(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    long res = 0, n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (auto &x : a)
    {
        cin >> x;
    }
    partial_sum(a.begin(), a.end(), b.begin(), mymax);
    partial_sum(a.rbegin(), a.rend(), c.rbegin(), mymax);
    for (int i = 1; i < n - 1; i++)
    {
        res += max(min(b[i - 1], c[i + 1]) - a[i], 0);
    }
    cout << res;

    return 0;
}