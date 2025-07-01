#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, m, x, c[100004] = {};
    fill(c + 1, c + 10001, 1e9);
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        for (int j = x; j <= 18; j++)
        {
            cout << "c[" << j << "]: " << c[j] << " c[" << j - x << "]: " << c[j - x] << endl;

            c[j] = min(c[j], 1 + c[j - x]);
            cout << "c[" << j << "]" << c[j] << endl;
        }
    }
    while (q--)
    {
        cin >> m;
        if (c[m] == 1e9)
        {
            c[m] = -1;
        }
        cout << c[m] << "\n";
    }
}