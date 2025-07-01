#include <bits/stdc++.h>
using namespace std;

int n, a[200], res = 0, M;

void TRY(int k, int T, int remain) // da xet k do vat a1...ak-1 trong T
{
    if (res == M || T + remain < res)
        return;
    if (k - 1 == n)
        res = max(res, T);
    else
    {
        if (T + a[k] <= M)
            TRY(k + 1, T + a[k], remain - a[k]); // co chon a[k]
        TRY(k + 1, T, remain - a[k]);            // ko chon a[k]
    }
}

int main()
{
    cin >> n >> M; // so do vat va kich thuoc tui
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        total += a[i];
    }
    sort(a + 1, a + n + 1, greater<int>());
    TRY(1, 0, total);
    cout << res;
}

/*
4 40
17 26 19 8
*/