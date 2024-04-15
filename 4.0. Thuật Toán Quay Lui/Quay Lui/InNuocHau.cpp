#include <bits/stdc++.h>
using namespace std;

map<int, int> C, P, A;
int n, d = 0, x[100];
void TRY(int k)
{
    if (k - 1 == n)
    {
        cout << "\n"
             << ++d << " : ";
        for (int i = 1; i <= n; i++)
        {
            cout << "(" << i << ", " << x[i] << ") ";
        }
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (A[i] == 0 && C[k - i] == 0 && P[k + i] == 0)
        {
            A[i] = C[k - i] = P[k + i] = 1;
            x[k] = i;
            TRY(k + 1);
            A[i] = C[k - i] = P[k + i] = 0;
        }
    }
}

int main()
{
    cin >> n;
    TRY(1);
}