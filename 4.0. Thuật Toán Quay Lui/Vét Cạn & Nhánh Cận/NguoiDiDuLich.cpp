/*
c1: vet can sinh hoan vi
c2: nhanh can:
    - khong mat tinh tong quat
    - tao mang cac canh

*/
#include <bits/stdc++.h>
using namespace std;

int a[25][25], n, c[500] = {}, res = 1e9, m = 0, d[25] = {};

void TRY(int k, int t, int T)
{
    if (k - 1 == n)
    {
        res = min(res, T + a[t][1]);
    }
    else if (k - 1 < n)
    {
        for (int z = 2; z <= n; z++)
        {
            if (d[z] == 0 && T + a[t][0] + c[n - (k - 1)] < res)
            {
                d[z] = 1;
                TRY(k + 1, z, T + a[t][z]);
                d[z] = 0;
            }
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (i < j)
            {
                c[++m] = a[i][j];
            }
        }
    }

    // mang c
    sort(c, c + m + 1);
    partial_sum(c + 1, c + m + 1, c + 1);
    TRY(2, 1, 0);
    cout << res << endl;
    return 0;
}