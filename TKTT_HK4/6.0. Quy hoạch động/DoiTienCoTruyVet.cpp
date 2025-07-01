// C[0][j] = 1e9 : 0 menh gia, so tien j
//  c[i][0] = 0 : menh gia i, so tien 0

// Doi tien co truy vet su dung quy hoach dong
#include <bits/stdc++.h>
using namespace std;

int c[105][100004] = {}, n, m, a[1005];

void trace(int n, int m)
{
    if (c[n][m] == 0)
        return;
    while (c[n][m] == c[n - 1][m])
        n--;
    trace(n, m - a[n]);
    cout << a[n] << " ";
}

int main()
{
    cin >> n >> m;
    int a[n];
    fill(c[0] + 1, c[0] + m + 1, 1e9); // c[0][1],c[0][2],c[0][3],...,c[0][m] = 1e9
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        for (int j = 0; j <= m; j++)
        {
            if (j < a[i])
            {
                c[i][j] = c[i - 1][j];
            }
            else
            {
                c[i][j] = min(c[i - 1][j], 1 + c[i][j - a[i]]);
            }
        }
        if (c[n][m] == 1e9)
            cout << "Khong doi duoc";
        else
        {
            cout << "\nSo to it nhat: " << c[n][m] << endl;
            trace(n, m);
        }
    }
}