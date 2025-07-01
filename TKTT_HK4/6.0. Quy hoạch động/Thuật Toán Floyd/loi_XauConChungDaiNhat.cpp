#include <bits/stdc++.h>
using namespace std;

string x, y;
int n, m, c[105][10005] = {};

void trace(int n, int m)
{
    if (c[n][m] == 0)
        return;
    while (c[n][m] == c[n - 1][m])
        n--;
    while (c[n][m] == c[n][m - 1])
        m--;
    trace(n - 1, m - 1);
    cout << x[n];
}

int main()
{
    cin >> x;
    n = x.size();
    x = '$' + x;
    cin >> y;
    m = y.size();
    y = '$' + y;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (x[i] = y[j])
            {
                c[i][j] = 1 + c[i - 1][j - 1];
            }
            else
            {
                c[i][j] = max(c[i - 1][j], c[i][j - 1]);
            }
        }
    }
    cout << "\nDo dai xccdn " << c[n][m] << "\n";
    trace(n, m);
}