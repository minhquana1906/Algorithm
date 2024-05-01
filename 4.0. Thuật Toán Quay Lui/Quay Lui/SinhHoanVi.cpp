#include <bits/stdc++.h>
using namespace std;

void TRY1(int *x, int k, int n)
{
    if (k - 1 == n)
    {
        for (int i = 1; i <= n; i++)
            cout << x[i] << (i < n ? "" : "\n");
    }
    else
    {
        for (int t = 1; t <= n; t++)
        {
            int ok = 1;
            for (int i = 1; i < k && ok; i++)
                if (x[i] == 0)
                    ok = 0;
            if (ok)
            {
                x[k] = t;
                TRY1(x, k + 1, n);
            }
        }
    }
}

// SU dung mang danh dau
int d[100] = {};
void TRY2(int *x, int k, int n)
{
    if (k - 1 == n)
    {
        for (int i = 1; i <= n; i++)
            cout << x[i] << (i < n ? "" : "\n");
    }
    else
    {
        for (int t = 1; t < k; t++)
        {
            if (d[t] == 0)
            {
                d[t] = 1;
                x[k] = t;
                TRY2(x, k + 1, n);
                d[t] = 0; // nha danh dau de xet nhom khac
            }
        }
    }
}

int main()
{
    int n, x[100];
    cin >> n;
    // TRY1(x, 1, n);
    TRY2(x, 1, n);
    return 0;
}