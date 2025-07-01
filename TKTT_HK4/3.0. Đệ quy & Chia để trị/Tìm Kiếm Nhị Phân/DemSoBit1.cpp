#include <bits/stdc++.h>
using namespace std;

long long D[60] = {0, 1};
long long B(long long n)
{
    if (n < 1)
        return 0;
    long long k = log2(n + 1);
    return D[k] + (n - (1LL << k) + 1) + B(n - (1LL << k));
}

int main()
{
    for (int i = 2; i < 100; i++)
        D[i] = D[i - 1] * 2 + (1LL << (i - 1)); // (1LL<<(i-1)) = 2^(i-1)
    long long n;

    cin >> n;
    cout << B(n);
}