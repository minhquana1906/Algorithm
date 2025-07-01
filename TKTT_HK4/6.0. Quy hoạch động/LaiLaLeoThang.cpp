// Quy hoach dong
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long dp[n + 5] = {0, 1, 2, 3};
    for (int i = 4; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    cout << dp[n];
}