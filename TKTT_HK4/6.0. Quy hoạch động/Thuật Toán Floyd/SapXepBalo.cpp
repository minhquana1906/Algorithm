/*
c1: tham lam theo gia tri (cang dat cang lay, gtri giam dan)
c2: tham lam theo kichs thuoc(kthuoc tang dan)
c3: tham lam theo gtri/kich thuoc(kthuoc tang dan)

Quaylui:
vetcan: sinh ra tap con => tong => max

Quy hoach dong:
c[i][j] tong gia tri lon nhat khi dung cac vat tu 1 -> i sap xep vao balo kich thuoc j

c[i][0]: i do vat, balo kt 0 => 0
c[0][j]: 0 do vat, balo kt j => 0
*/

#include <bits/stdc++.h>
using namespace std;

int n, m, a[105], b[105], c[105][10005] = {};

void trace(int n, int m)
{
    if (c[n][m] == 0)
        return;
    while (c[n][m] == c[n - 1][m])
        n--;
    trace(n - 1, m - a[n]);
    cout << "\nChon vat co kich thuoc " << a[n] << " gia tri " << b[n];
}

// int main()
// {
//     cin >> n >> m;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i] >> b[i];
//         for (int j = 1; j <= m; j++)
//         {
//             c[i][j] = j < a[i] ? c[i - 1][j] : max(c[i - 1][j], b[i] + c[i - 1][j - a[i]]);
//         }
//     }
//     cout << "Gia tri max " << c[n][m] << endl;
//     trace(n, m);
// }

int main()
{
    int q;
    vector<int> ans;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }
    cin >> q;
    while (q--)
    {
        cin >> m;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                c[i][j] = j < a[i] ? c[i - 1][j] : max(c[i - 1][j], b[i] + c[i - 1][j - a[i]]);
                ans.push_back(c[i][j]);
            }
        }
    }
    for (int &x : ans)
    {
        cout << x << endl;
    }
}