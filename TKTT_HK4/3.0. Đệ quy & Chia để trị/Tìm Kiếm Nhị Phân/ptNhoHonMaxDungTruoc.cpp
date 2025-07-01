#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> M;
    int n, x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        M[x]++;
        auto it = M.lower_bound(x);
        if (it == M.begin())
            cout << "0\n";
        else
        {
            it--;
            cout << it->first << " " << it->second << "\n";
        }
    }
}