#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> sk;
// tgian bat dau = p.second, tgian ketthuc = p.first

bool cmp(sk a, sk b)
{
    return a.second < b.second;
}

/*
int main()
{
    int n, res = 0, m = -INT_MAX;
    cin >> n;
    sk a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i].second >> a[i].first;
    sort(a, a + n, cmp);        //sort gia tri dau tien
    for (int i = 0; i < n; i++)
    {
        if (a[i].second > m)        //so sanh gia tri dau tien voi m
        {
            res++;
            m = a[i].first;         // dat lai m = gia tri thu 2
        }
    }
    cout << res;        //=> 2:8 -> 9:12
}
*/

/*
input:
5
4 7
2 8
3 6
7 9
9 12
2
*/

// cach2
#define bd second
#define kt first

int main()
{
    int n, res = 0, m = -INT_MAX;
    cin >> n;
    sk a[n];
    for (auto &x : a)
        cin >> x.bd >> x.kt;
    sort(a, a + n); // auto sort by first
    for (auto &x : a)
        if (x.bd > m)
        {
            res++;
            m = x.kt;
        }
    cout << res;
}