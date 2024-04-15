#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> sk;
#define bd second
#define kt first

vector<int> v;

void sol()
{
    long long n, res = 0, m = -INT_MAX, k = -INT_MAX;
    cin >> n;
    sk a[n];
    for (auto &x : a)
        cin >> x.bd >> x.kt;
    sort(a, a + n);
    for (auto &x : a)
    {
        if (m < k)
            swap(m, k);
        if (x.bd > m)
        {
            res++;
            m = x.kt;
        }
        else if (x.bd > k)
        {
            res++;
            k = x.kt;
        }
    }
    v.push_back(res);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    for (auto &x : v)
        cout << x << endl;
}