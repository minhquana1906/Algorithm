#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> p;
#define gt first
#define vt second

void solve()
{
    priority_queue<p> q;
    int n, x, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        while (q.size() && q.top().first <= x)
            q.pop(); // bo di nhung ptu be va xa ngoai tam
        q.push({x, i});
        if (i >= k)
        {
            while (i - q.top().second >= k)
                q.pop(); // loai max ngoia khoang
            cout << q.top().first << " ";
        }
    }
}

int main()
{
    solve();
}