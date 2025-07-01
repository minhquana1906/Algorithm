#include <bits/stdc++.h>
using namespace std;

int n, x[20], d = 0;

bool check(int i, int j)
{
    return i == 1 || ((x[i - 1] + j) % 3 != 0 && x[i - 1] != j);
}

void output()
{
    for (int i = 1; i <= n; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
    d++;
}

void TRY(int i)
{
    for (int j = 0; j <= 2; j++)
    {
        if (check(i, j))
        {
            x[i] = j;
            if (i == n)
            {
                output();
            }
            else
            {
                TRY(i + 1);
            }
        }
    }
}

int main()
{
    cin >> n;
    TRY(1);
    cout << d;
    return 0;
}