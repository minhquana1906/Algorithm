#include <bits/stdc++.h>
using namespace std;

priority_queue<long, vector<long>, greater<long>> q;

void solve()
{
    long n, x, res = 0;
    cin >> n;
    long a[n];
    for (auto &x : a)
    {
        cin >> x;
        q.push(x);
    }
    while (q.size() > 1)
    {
        x = q.top();
        q.pop();
        x += q.top();
        q.pop();
        q.push(x);
        res += x;
    }
    cout << res;
}

int main()
{
    solve();
}