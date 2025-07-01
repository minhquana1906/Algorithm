#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ans;
    int n, a, b, M, q, C[10004] = {};
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        for (int j = 1e4; j >= a; j--)
            C[j] = max(C[j], C[j - a] + b);
    }
    cin >> q;
    while (q--)
    {
        cin >> M;
        ans.push_back(C[M]);
    }
    for (int &x : ans)
    {
        cout << x << endl;
    }
}

/*
6
4 7
3 5
4 8
2 3
2 4
5 9
4
11
100
1
8
*/
