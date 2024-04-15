#include <bits/stdc++.h>
using namespace std;

void nhomBan()
{
    int n, m, x, y;
    cin >> n >> m;
    vector<int> A[n + 5]; // danh sach ke
    int d[n + 5] = {}, G[n + 5] = {}, k = 0;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        A[x].push_back(y);
        A[y].push_back(x);
    }
    for (int i = 0; i <= n; i++)
    {
        if (d[i] == 0)
        {
            G[++k]++;
            d[i] = k;
            stack<int> s;
            s.push(i);
            while (s.size())
            {
                int u = s.top();
                s.pop();
                for (int v : A[u])
                    if (d[v] == 0)
                    {
                        d[v] = k;
                        G[k]++;
                        s.push(v);
                    }
            }
        }
        cout << k << " " << max_element(G + 1, G + k + 1);
    }
}

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

void btSo6va8()
{
    int n, x, y;
    cin >> n;
    queue<int> Q;
    map<int, string> M;
    // if(n%5 == 0 ){cout<<0;return };
    Q.push(6 % n);
    M[6 % n] = "6";
    Q.push(8 % n);
    M[8 % n] = "8";
    if (n == 1 || n == 2)
    {
        M[6 % n] = "6";
    }
    while (Q.size() and M.find(0) == M.end())
    {
        int u = Q.front();
        Q.pop();
        x = (u * 10 + 6) % n;
        if (M.find(x) == M.end())
        {
            M[x] = M[u] + "6";
            Q.push(x);
        };
        x = (u * 10 + 8) % n;
        if (M.find(x) == M.end())
        {
            M[x] = M[u] + "8";
            Q.push(x);
        };
    }
    if (M.find(0) == M.end())
    {
        M[0] = "0";
    }
    cout << M[0];
}

void btDoiTien()
{
    int n, q;
    cout << "Nhap vao so menh gia, so truy van: ";
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    queue<int> Q;
    map<int, int> M;
    Q.push(0);
    M[0] = 0;
    while (Q.size())
    {
        int u = Q.front();
        Q.pop();
        for (int x : a)
        {
            if (x + u <= 1e4 && M.find(x + u) == M.end())
            {
                M[x + u] = M[u] + 1;
                Q.push(x + u);
            }
        }
    }
    while (q--)
    {
        cout << "Nhap m: ";
        int m;
        cin >> m;
        if (M.find(m) == M.end())
        {
            M[m] = -1;
        }
        cout << M[m] << endl;
    }
}

int main()
{
    // nhomBan();
    // dongNuoc();
    // btSo6va8();
    btDoiTien();
}