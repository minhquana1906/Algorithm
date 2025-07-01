#include <bits/stdc++.h>
using namespace std;

map<int, long long> Dict;

long long fibonanci(int n)
{
    if (Dict.find(n) != Dict.end())
        return Dict[n];
    return Dict[n] = n > 1 ? fibonanci(n - 1) + fibonanci(n - 2) : 1;
}

map<pair<int, int>, long> Pascal;
long C(int k, int n)
{
    if (k == 0 || k == n)
        return Pascal[{k, n}] = 1;
    if (Pascal.find({k, n}) != Pascal.end())
        return Pascal[{k, n}];
    return Pascal[{k, n}] = C(k - 1, n - 1) + C(k, n - 1);
}
int main()
{
    // cout << fibonanci(50);

    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << "\n";
        for (int j = 0; j <= i; j++)
            cout << C(j, i) << " ";
    }
    return 0;
}