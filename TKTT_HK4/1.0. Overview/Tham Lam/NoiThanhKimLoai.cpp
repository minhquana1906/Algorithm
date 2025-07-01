#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, res = 0, u, v;
    cin >> n;
    int a[n + 5];
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pq.push(a[i]);
    }

    while (pq.size() > 1)
    {
        u = pq.top();
        pq.pop();
        v = pq.top();
        pq.pop();

        res += u + v;
        pq.push(u + v);
    }
    cout << res;
}