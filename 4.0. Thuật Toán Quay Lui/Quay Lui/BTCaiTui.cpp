#include <bits/stdc++.h>
using namespace std;

int n, a[200], res = 0, M, d = 0;

void TRY(int k, int T) // da xet k do vat a1...ak-1 trong T
{
    if (res == M)
        return;
    if (k - 1 == n)
        res = max(res, T);
    else
    {
        d++;
        if (T + a[k] <= M)
            TRY(k + 1, T + a[k]); // co chon a[k]
        TRY(k + 1, T);            // ko chon a[k]
    }
}

int main()
{
    cin >> n >> M; // so do vat va kich thuoc tui
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    TRY(1, 0);
    cout << res << endl;
    cout << d;
}

/*
4 40
17 26 19 8
*/