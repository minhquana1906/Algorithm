#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m;
    int a[n];
    for (int &x : a)
    {
        cin >> x;
    }
    sort(a, a + n);
    while (m--)
    {
        cin >> x;
        cout << upper_bound(a, a + n, x) - a << endl;
    }
}