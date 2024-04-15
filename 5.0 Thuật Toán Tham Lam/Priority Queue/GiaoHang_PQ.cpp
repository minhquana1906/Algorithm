#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> a[1000005];
    priority_queue<long> q;
    long n, t, v, res = 0, m = 0;
    cin >> n;

    while (n--)
    {
        cin >> t >> v;
        a[t].push_back(v);
        m = max(m, t);
    }
    for (int i = m; i >= 01; i--)
    {
        for (auto x : a[i])
            q.push(x);
        if (q.size())
        {
            res += q.top();
            q.pop();
        }
    }
    cout << res;
}