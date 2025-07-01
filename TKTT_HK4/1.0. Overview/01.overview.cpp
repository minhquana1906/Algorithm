#include <bits/stdc++.h>
using namespace std;

#define input(x)                        \
    {                                   \
        cout << "Nhap " << #x << " = "; \
        cin >> x;                       \
    }
int main()
{
    int a, b;
B1:
    input(a);
    input(b);
B2:
    if (a != b)
    {
        a > b ? a -= b : b -= a;
        goto B2;
    }
B3:
    cout << "ucln: " << a;
}