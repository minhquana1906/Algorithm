#include <bits/stdc++.h>
using namespace std;

int n, c[105][105], x[100];
// cau hinh quay lui: x1, x2,...,xn
// x[i] so thu tu thanh pho nguoi di du lich di qua
int visited[105];
int d, ans = 1e9;
// d: distance, ans: bien luu gia tri chi phi nho nhat

void nhap() // nhap thong tin: so thanh pho va ma tran chua thong tin di chuyen giua cac tp
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> c[i][j];
        }
    }
    memset(visited, 0, sizeof(visited));
}

void TRY(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (visited[j] == 0) // neu chua ghe tham tp j
        {
            visited[j] = 1; // set ghe tham = true
            x[i] = j;
            d += c[x[i - 1]][x[i]]; //
            if (i == n)             // da tham tat ca tp
            {
                // cap nhat kqua
                ans = min(ans, d + c[x[n]][1]); // c[x[n][1]] la chi phi di tu thanh pho thu n ve tp dau tien => ket thuc chu trinh
            }
            else
            {
                TRY(i + 1);
            }
            visited[j] = 0;
            d -= c[x[i - 1]][x[i]];
        }
    }
}

int main()
{
    nhap();
    x[1] = 1;
    visited[1] = 1;
    TRY(2);
    cout << ans << endl;
}
/*
4
0 85 26 81
85 0 77 97
26 77 0 26
81 97 26 0
*/