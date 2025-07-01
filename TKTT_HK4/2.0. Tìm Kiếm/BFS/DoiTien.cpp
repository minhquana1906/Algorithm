#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, m;
    cin >> n >> q;
    int a[n];
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // nhap cac menh gia
    }

    // khoi tao queue (de duyet bfs) va map (ktra ptu da xuat hien chua)
    queue<int> Q;
    map<int, int> M;
    Q.push(0);
    M[0] = 0;

    while (Q.size())
    {
        int u = Q.front();
        Q.pop();
        for (int v : a) // duyet cac menh gia
        {
            if (v + u <= 1e4 && M.find(u + v) == M.end()) // kiem tra xem (u + v) da xuat hien chua
            {
                M[u + v] = M[u] + 1; // cong them 1 to
                Q.push(u + v);       // them vao hang doi duyet bfs
            }
        }
    }
    while (q--)
    {
        cin >> m;
        if (M.find(m) == M.end())
        {
            M[m] = -1;
        }
        res.push_back(M[m]);
    }
    for (auto x : res)
    {
        cout << x << endl;
    }
}