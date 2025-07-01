#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
    int t = 0, n, c;
    cin >> c;
    while (c--)
    {
        cin >> n;
        if (n % 1000)
        {
            return !printf("-1");
        }
        for (auto x : a)
        {
            t += n / x;
            n %= x;
        }
        cout << t << endl;
        t = 0;
    }
}