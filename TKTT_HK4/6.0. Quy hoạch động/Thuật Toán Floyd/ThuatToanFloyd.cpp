#include <bits/stdc++.h>
using namespace std;

int c[205][205] = {}, p[205][205] = {}, n, m, x, y, w;

void trace(int u, int v)
{
    if (p[u][v] == 0)
        cout << u << " -> ";
    else
    {
        trace(u, p[u][v]);
        trace(p[u][v], v);
    }
}

void Floyd()
{
}

int main()
{
    // Floyd();
    // freopen("input.txt", "r", stdin);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; i <= n; j++)
        {
            if (i != j)
            {
                c[i][j] = 1e9;
            }
        }
    }

    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y >> w;
        c[x][y] = w;
    }
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (c[i][j] > c[i][k] + c[k][j])
                {
                    c[i][j] = c[i][k] + c[k][j];
                    p[i][j] = k;
                }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i != j)
            {
                if (c[i][j] = 1e9)
                    cout << "\nKhong co duong di " << i << " den " << j;
                else
                {
                    cout << "\nDuong di nn " << i << " den " << j << " la " << c[i][j] << ": ";
                    trace(i, j);
                    cout << j;
                }
            }
}
