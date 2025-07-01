#include <bits/stdc++.h>
using namespace std;

void THN(int n, char A, char B, char C)
{
    cout << "if1\n";
    if (n > 1)
    {
        THN(n - 1, A, C, B);
    }
    cout << "Chuyen dia " << n << " tu " << A << " sang " << B << endl;
    if (n > 1)
    {
        THN(n - 1, C, B, A);
    }
}

int main()
{
    THN(3, 'A', 'B', 'C');
    return 0;
}