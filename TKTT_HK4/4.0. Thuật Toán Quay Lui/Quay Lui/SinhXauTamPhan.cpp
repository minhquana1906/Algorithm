#include <bits/stdc++.h>
using namespace std;

string s = "012";

void TRY(string x, int n)
{
    if (x.size() == n)
    {
        cout << x << "\n";
        return;
    }

    for (auto c : s)
        TRY(x + c, n);
}

int main()
{
    int n;
    cin >> n;
    TRY("", n);
}