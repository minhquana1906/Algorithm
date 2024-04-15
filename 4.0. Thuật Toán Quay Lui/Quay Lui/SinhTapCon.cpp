#include <bits/stdc++.h>
using namespace std;

int n, m, x[100] = {};

void TRY(int k)
{ // gsu co x[1]...x[k-1]
    if (k - 1 == m)
        for (int i = 1; i <= m; i++)
            cout << x[i] << (i < m ? " " : "\n");
    else
        for (x[k] = x[k - 1] + 1; x[k] <= n; x[k]++)
        {
            TRY(k + 1);
        }
}

int main()
{
    cin >> n >> m;
    TRY(1);
}