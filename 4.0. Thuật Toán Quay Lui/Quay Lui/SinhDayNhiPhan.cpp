#include <bits/stdc++.h>
using namespace std;

int x[100], n;

void TRY1(int k)
{
    if (k - 1 == n)
    {
        for (int i = 1; i <= n; i++)
            cout << x[i];
        cout << endl;
    }
    else
    {
        x[k] = 0;
        TRY1(k + 1);
        x[k] = 1;
        TRY1(k + 1);
    }
}

void TRY2(string x, int n)
{
    if (x.size() == n)
    {
        cout << x << "\n";
        return;
    }
    TRY2(x + "0", n);
    if (x.size() < 2 || !(x[x.size() - 2] == '1' && x[x.size() - 1] == '0'))
        TRY2(x + "1", n);
}
int main()
{

    cin >> n;
    // TRY1(1);
    TRY2("", n);
}
