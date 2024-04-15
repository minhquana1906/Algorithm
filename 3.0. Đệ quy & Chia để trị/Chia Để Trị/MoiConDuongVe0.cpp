#include <bits/stdc++.h>
using namespace std;

long long dic[100005] = {}, M = 1e9 + 7;

long long zero(long long n)
{
    if (dic[n])
        return dic[n];
    if (n == 0)
        return dic[n] = 1;
    for (long long a = 1; a * a <= n; a++)
    {
        if (n % a == 0)
            dic[n] = (dic[n] + zero((a - 1) * (n / a + 1))) % M;
    }
    return dic[n];
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << zero(n) << endl;
    }
}