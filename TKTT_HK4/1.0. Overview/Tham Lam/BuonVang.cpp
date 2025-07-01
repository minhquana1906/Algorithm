#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, res = 0, max;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    max = a[n];
    for (int i = n; i >= 1; i--)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else
        {
            res += max - a[i];
        }
    }
    cout << res;
}