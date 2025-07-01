#include <bits/stdc++.h>
using namespace std;

int n, x[20], used[20], d = 0;

void print()
{
    for (int i = 1; i <= n; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
    d++;
}

bool check(int i, int v)
{
    return i == 1 || (x[i - 1] + v) % 4 != 0;
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!used[j] && check(i, j))
        {
            x[i] = j;
            used[j] = 1;
            if (i == n)
            {
                print();
            }
            else
            {
                Try(i + 1);
            }
            used[j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    Try(1);
    cout << d;
    return 0;
}