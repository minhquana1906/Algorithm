#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[1001];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long sum = 0;
    for (int i = 0; i < k; i++)
        sum += a[i];

    long long res = sum, idx = 0;
    for (int i = k; i < n; i++)
    {
        sum = sum - a[i - k] + a[i]; // tru di ptu vua ra khoi vong cua xo trt va cong them ptu vua dc them vao cua so trt
        if (sum > res)
        {
            res = sum; // cap nhat res max
            idx = i - k + 1;
        }
    }
    cout << res << endl;
    for (int j = 0; j < k; j++)
        cout << a[j + idx] << " ";
}

/*
8 3
4 7 2 5 6 3 9 1
*/