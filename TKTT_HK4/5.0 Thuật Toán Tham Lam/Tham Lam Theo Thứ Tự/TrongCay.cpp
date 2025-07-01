#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
    {
        cin >> x;
    }
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        a[i] += i;
    }
    cout << 2 + *max_element(a, a + n);
}