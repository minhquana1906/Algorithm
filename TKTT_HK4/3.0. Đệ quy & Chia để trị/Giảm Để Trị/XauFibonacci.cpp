#include <bits/stdc++.h>
using namespace std;

long long F[105] = {0, 1, 1};

char xFibo(long long k, long long n)
{
    if (n == 1)
        return 'A';
    if (n == 2)
        return 'B';
    if (k <= F[n - 2])
        return xFibo(k, n - 2);
    return xFibo(k - F[n - 2], n - 1);
}

int main()
{
    for (int i = 3; i < 100; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
    long long t, k, n;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << xFibo(k, n) << endl;
    }
}