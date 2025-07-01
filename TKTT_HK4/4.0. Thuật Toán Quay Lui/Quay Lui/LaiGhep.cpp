#include <bits/stdc++.h>
using namespace std;

string a, b;
int n;
void TRY(string x, int k)
{
    if (x.size() == n)
    {
        cout << x << endl;
    }
    else
    {
        TRY(x + a[k], k + 1);
        if (a[k] != b[k])
        {
            TRY(x + b[k], k + 1);
        }
    }
}

int main()
{
    cin >> a >> b;
    n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            swap(a[i], b[i]);
        }
    }
    TRY("", 0);
}