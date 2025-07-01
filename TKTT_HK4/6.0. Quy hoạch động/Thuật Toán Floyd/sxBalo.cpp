#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, a, b, m = 1e4, c[10005] = {};
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        for (int j = m; j >= a; j--)
        {
            c[j] = max(c[j], b + c[j - a]);
        }
    }
    cin >> q;
    while (q--)
    {
        cin >> m;
        cout << c[m] << endl;
    }
}