// Quay lui
#include <bits/stdc++.h>
using namespace std;

int d = 0;

void TRY(int t, int n)
{
    if (t == n)
    {
        d++;
        return;
    }
    for (int i : {1, 2, 3})
    {
        if (t + i <= n)
        {
            TRY(t + i, n);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    TRY(0, n);
    cout << d;
}