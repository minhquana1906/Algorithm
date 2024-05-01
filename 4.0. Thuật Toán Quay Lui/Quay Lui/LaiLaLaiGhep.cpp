#include <bits/stdc++.h>
using namespace std;

string a, b;
int n;
void TRY(string x, int k, int d)
{
    if (d == 3)
        return;
    if (k == n)
    {
        cout << x << "\n";
    }
    else
    {
        TRY(x + a[k], k + 1, a[k] == 'A' ? 0 : d + 1);
        if (a[k] != b[k])
            TRY(x + b[k], k + 1, b[k] == 'A' ? 0 : d + 1);
    }
}

int main()
{
    cin >> a >> b;
    n = a.length();
    for (int i = 0; i < n; i++)
        if (a[i] > b[i])
            swap(a[i], b[i]);

    TRY("", 0, 0);
}