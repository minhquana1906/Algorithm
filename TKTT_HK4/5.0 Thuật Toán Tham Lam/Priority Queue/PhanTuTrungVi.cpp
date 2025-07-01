#include <bits/stdc++.h>
using namespace std;

void mySwap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void solve()
{
    priority_queue<int> l;
    priority_queue<int, vector<int>, greater<int>> r;

    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (i % 2 != 0)
        {
            l.push(x);
        }
        else
        {
            r.push(x);
        }
        if (i >= 2 && l.top() > r.top())
        {
            // mySwap(l.top(), r.top());
            int a = l.top();
            l.pop();
            int b = r.top();
            r.pop();

            l.push(b);
            r.push(a);
        }
        cout << l.top() << " ";
    }
}

int main()
{
    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}