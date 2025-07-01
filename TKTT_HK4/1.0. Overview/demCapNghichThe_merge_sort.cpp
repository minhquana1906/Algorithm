#include <bits/stdc++.h>
using namespace std;

int merge(int a[], int l, int m, int r)
{
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    int cnt = 0;
    while (i < x.size() && j < y.size())
    {
        if (x[i] <= y[j])
        {
            a[l++] = x[i++];
        }
        else
        {
            cnt += x.size() - i; // tang so cap nghich the (tang them so phan tu tu chi so i den het mang x[])
            a[l++] = y[j++];
        }
    }
    while (i < x.size())
    {
        a[l++] = x[i++];
    }
    while (j < y.size())
    {
        a[l++] = y[j++];
    }
    return cnt;
}

int mergeSort(int a[], int l, int r)
{
    int dem = 0;
    if (l >= r)
        return 0;
    int m = (l + r) / 2;
    dem += mergeSort(a, l, m);
    dem += mergeSort(a, m + 1, r);
    dem += merge(a, l, m, r);
    return dem;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << mergeSort(a, 0, n - 1);
    return 0;
}