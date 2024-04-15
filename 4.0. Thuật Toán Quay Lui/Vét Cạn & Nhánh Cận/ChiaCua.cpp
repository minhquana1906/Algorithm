#include <bits/stdc++.h>
using namespace std;

int n, a[100];
double res = 1e9, t = 0;
void TRY(int k, int A, int B)
{
    if (k - 1 == n)
    {
        res = min(res, 1.0 * (B - A));
    }
    else
    {
        if (A + a[k] <= t)
            TRY(k + 1, A + a[k], B);
        if (B + a[k] <= t + res / 2)
            TRY(k + 1, A, B + a[k]);
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        t += a[i];
    }
    t /= 2;
    TRY(1, 0, 0);
    cout << res;
}