// Tichpx - dem so nghich the
#include <bits/stdc++.h>
using namespace std;
int b[100005], c[100005], n, a[100005];
long long snt(int L, int R)
{
    if (L >= R - 1)
        return 0;
    int M = (L + R) / 2, k, i, j;
    long long s = snt(L, M) + snt(M, R);
    cout << "s(" << L << ", " << R << "): " << s << endl;

    for (k = M - 1, i = 0; k >= L; k--)
    {
        b[++i] = a[k]; // b[1]...b[i]
        cout << "b[" << i << "]: " << b[i] << endl;
        cout << "a[" << k << "]: " << a[k] << endl;
    }
    for (k = R - 1, j = 0; k >= M; k--)
    {
        c[++j] = a[k]; // c[1]...c[j]
        cout << "c[" << j << "]: " << c[j] << endl;
        cout << "a[" << k << "]: " << a[k] << endl;
    }

    for (k = L; k < R; k++)
    {
        cout << "k: " << k << endl;
        if (i > 0 && j > 0)
        {
            if (b[i] > c[j])
            {
                cout << "b[" << i << "]: " << b[i] << endl;
                cout << "c[" << j << "]: " << c[j] << endl;
                a[k] = c[j--];
                s += i;
                cout << "a[" << k << "]: " << a[k] << endl;
                cout << "s: " << s << endl;
            }
            else
            {
                a[k] = b[i--];
                cout << "a[" << k << "]: " << a[k] << endl;
            }
        }
        else
        {
            a[k] = i > 0 ? b[i--] : c[j--];
            cout << "a[" << k << "]: " << a[k] << endl;
        }
    }
    cout << endl;
    return s;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << snt(1, n + 1);
}
