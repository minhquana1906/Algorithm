#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n, greater<int>());
    sort(b, b + m, greater<int>());

    int res = 0;

    // Do phuc tap O(n+m)
    for (int i = 0, j = 0; i < n && j < m; i++, j++)
    {
        while (j < m && a[i] <= b[j])
            j++;
        if (j < m)
            res++;
    }
    cout << res << endl;
}