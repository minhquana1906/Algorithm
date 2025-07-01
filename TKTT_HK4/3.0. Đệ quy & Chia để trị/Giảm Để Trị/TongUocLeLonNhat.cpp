#include <bits/stdc++.h>
using namespace std;

long long S(int n)
{
    return n < 2 ? n : ((n + 1) / 2) * ((n + 1) / 2) + S(n / 2);
}

int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << S(b) - S(a - 1) << "\n";
    }
}