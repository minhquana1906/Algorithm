#include <bits/stdc++.h>
using namespace std;

// Bai toan đong nước
typedef pair<int, int> pii;
map<pii, pii> P;
void path(pii v)
{
    if (v.first == 0 && v.second == 0)
    {
        cout << "(0,0)";
        return;
    }
    path(P[v]);
    cout << " -> (" << v.first << "," << v.second << ")";
}

void dongNuoc()
{
    int n, m, k;
    cin >> n >> m >> k;
    queue<pii> Q;
    map<pii, int> M;
    Q.push({0, 0});
    M[{0, 0}] = 0;
    while (Q.size())
    {
        int x = Q.front().first,
            y = Q.front().second,
            z = x + y;
        Q.pop();
        pii Next[] = {{0, y}, {n, y}, {x, 0}, {x, m}, {max(0, z - m), min(z, m)}, {min(z, n), max(0, z - n)}};
        for (auto t : Next)
        {
            if (M.find(t) == M.end())
            {
                M[t] = M[{x, y}] + 1;
                Q.push(t);
                if (t.first == k || t.second == k)
                {
                    cout << M[t] << endl;
                    path(t);
                    return;
                }
            }
        }
    }
    cout << "KHONG DONG DUOC";
}

int main()
{
    dongNuoc();
    return 0;
}