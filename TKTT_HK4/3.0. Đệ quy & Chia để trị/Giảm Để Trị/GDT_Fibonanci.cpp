#include <bits/stdc++.h>
using namespace std;

/*
Cach1: O(n)

pair<long, long> Fib(int n)
{
    if (n == 1)
        return {1, 1};
    pair<long, long> t = Fib(n - 1);
    return {t.second, t.second + t.first};
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        pair<long, long> t = Fib(n);
        cout << t.first << " " << t.second << endl;
    }
    return 0;
}
*/

// Cach 2: O(logn)
long long M = 1e9 + 9;
void myPow(long long n, long long &a, long long &b)
{
    if (n == 0)
    {
        a = 1;
        b = 0;
        return;
    }
    long long x, y;
    myPow(n / 2, x, y);
    a = (x * x % M + y * y % M) % M;
    b = (x * y % M + y * (x - y) % M) % M;
    if (n % 2)
    {
        a = (a + b) % M;
        b = (a - b) % M;
    }
}
int main()
{
    long long n, a, b;
    cin >> n;
    myPow(n + 1, a, b);
    a--;
    cout << (a + M) % M << endl;
}