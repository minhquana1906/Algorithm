#include <bits/stdc++.h>
using namespace std;

set<pair<int, int>> res;

void DFS(int u, int v)
{
    if (res.find({u, v}) == res.end())
    {
        res.insert({u, v});
        if (u % 2 == 0)
            DFS(v, u / 2);
        if (v % 2 == 1)
            DFS(v / 2 + 1, u);
    }
}

int main()
{
    int x, y;
    cin >> x >> y;
    DFS(x, y);
    cout << res.size() << endl;
    return 0;
}