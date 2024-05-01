#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

int n, x[20];
void TRY(int i, int d)
{

    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        x[i] == 1 ? d + 1 : 0;
        if (i == n)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << x[i];
            }
            cout << endl;
        }
        else
        {
            TRY(i + 1, d);
        }
    }
}

int main()
{
    cin >> n;
    TRY(1, 0);
}