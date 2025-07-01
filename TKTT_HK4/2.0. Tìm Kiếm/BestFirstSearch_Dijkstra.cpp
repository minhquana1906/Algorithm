// Đường đi ít chi phí nhất trong bài mọi con đường về không
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    // first: chi phi, second: so
    map<int, int> m;
    int s, f;
    cin >> s >> f;
    pq.push({0, s});
    m[s] = 0;
    while (pq.size())
    {
        int c = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        if (m[u] < c)
            continue;
        if (u == f)
        {
            cout << c << " \n";
            return;
        }

        for (int a = 1; a * a <= u; a++)
        {
            if (u % a == 0)
            {
                int b = u / a, v = (a - 1) * (b + 1), d = c + (b % a ? b + a : b / a);
                if (v >= f and (m[v] == 0 or m[v] > d))
                {
                    pq.push({d, v});
                    m[v] = d;
                }
            }
        }
    }
    cout << "-1\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}