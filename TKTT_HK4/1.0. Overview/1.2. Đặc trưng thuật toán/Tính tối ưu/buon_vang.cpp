// Bài toán buôn vàng
#include <bits/stdc++.h>
using namespace std;

int my_func(int a, int b)
{
    if (a % 2 == 0)
    {
        return b % 2 == 0 ? max(a, b) : a;
    }
    return b % 2 == 0 ? b : -INT_MAX;
}

int main()
{
    // int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int n = sizeof(a) / sizeof(a[0]);
    // cout << accumulate(a, a + n, 0);

    // C1:

    // long n, res = 0;
    // cin >> n;
    // long a[n];
    // for (auto &x : a)
    // {
    //     cin >> x;
    // }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     long z = *max_element(a + i, a + n);
    //     if (z > a[i])
    //     {
    //         res += (z - a[i]);
    //     }
    // }
    // cout << res;
    // C2:

    long n, res = 0, z = 0;
    cin >> n;
    long a[n];
    for (auto &x : a)
        cin >> x;

    for (int i = n - 1; i >= 0; i--)
    {
        a[i] < z ? res += (z - a[i]) : z = a[i];
    }
    cout << res;

    return 0;
}