#include <bits/stdc++.h>
using namespace std;

int n, a[200], res = 0, M;

void TRY(int k, int T) // da xet k do vat a1...ak-1 trong T
{
    if (res == M)
        return;
    if (k - 1 == n)
        res = max(res, T);
    else
    {
        if (T + a[k] <= M)
            TRY(k + 1, T + a[k]); // co chon a[k]
        TRY(k + 1, T);            // ko chon a[k]
    }
}

int main()
{
    cin >> n >> M;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    TRY(1, 0);
    cout << res;
}