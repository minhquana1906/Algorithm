#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1, 3, 4, 7, 8, 9, 3, 11};
    int n = sizeof(a) / sizeof(int);
    int b[n];
    partial_sum(a, a + n, b);
    for (int x : a)
        cout << x << " ";
    cout << endl;
    for (int x : b)
        cout << x << " ";
}