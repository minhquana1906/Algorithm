#include <bits/stdc++.h>
using namespace std;

pair<int, int> Next[] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
int a[205][205], n, m, res = 0;

#define FOR(i, a, b) for (int i = a; i < b; i++)

void dfs(int u, int v)
{
    a[u][v] = 1;
    for (auto t : Next)
        if (a[u + t.first][v + t.second] == 0)
            dfs(u + t.first, v + t.second);
}

int main()
{
    cin >> n >> m;
    FOR(i, 1, n)
    FOR(j, 1, m)
    cin >> a[i][j];
    FOR(i, 0, n + 1)
    a[i][0] = a[i][n + 1] = 1;
    FOR(j, 0, m + 1)
    a[m + 1][j] = 1;
    FOR(i, 1, n)
    {
        if (a[i][1] == 0)
            dfs(i, 1);
        if (a[i][n] == 0)
            dfs(i, m);
    }
    FOR(j, 1, m)
    {
        if (a[1][j] == 0)
            dfs(1, j);
        if (a[n][j] == 0)
            dfs(n, j);
    }
    FOR(i, 2, n - 1)
    FOR(j, 2, m - 1)
    if (a[i][j] == 0)
    {
        res++;
        dfs(i, j);
    }
    cout << res;
}