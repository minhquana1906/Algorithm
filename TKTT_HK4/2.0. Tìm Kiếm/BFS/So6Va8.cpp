#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    queue<int> q;
    map<int, string> m;

    cin >> n;
    // khoi tao gia tri q, m
    q.push(6 % n);
    m[6 % n] = "6";
    q.push(8 % n);
    m[8 % n] = "8";
    if (n == 1 || n == 2)
    {
        m[6 % n] = "6";
    }

    while (q.size() && m.find(0) == m.end()) // khi queue con ptu va van chua thay phan tu trong map chia het cho n
    {
        int u = q.front();
        q.pop();
        x = (u * 10 + 6) % n;
        if (m.find(x) == m.end())
        {
            q.push(x);
            m[x] = m[u] + "6";
        }

        x = (u * 10 + 8) % n;
        if (m.find(x) == m.end())
        {
            q.push(x);
            m[x] = m[u] + "8";
        }
    }
    if (m.find(0) == m.end())
    {
        m[0] = "0";
    }
    cout << m[0];
}