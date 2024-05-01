#include <bits/stdc++.h>
using namespace std;

int n, d = 0;
vector<string> ans;
string a, b;

void TRY(string x, int k)
{

    if (k == n)
    {
        d++;
        ans.push_back(x);
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
    cin >> n;
    cin >> a >> b;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            swap(a[i], b[i]);
        }
    }

    TRY("", 0);
    cout << d << endl;
    for (string &x : ans)
        cout << x << endl;
}