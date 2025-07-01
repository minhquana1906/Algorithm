#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    long long t, v;
} Hang;
int cmp(const void *a, const void *b)
{
    Hang *x = (Hang *)a;
    Hang *y = (Hang *)b;
    return -(x->t - y->t);
}
int main()
{
    int n;
    cin >> n;
    Hang a[n];
    priority_queue<long long, vector<long long>, less<long long>> pq;
    vector<long long> vt[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].t >> a[i].v;
        vt[a[i].t].push_back(a[i].v);
    }
    qsort(a, n, sizeof(Hang), cmp);
    int time = a[0].t;
    long long sum = 0;
    for (int i = time; i > 0; i--)
    {
        for (auto x : vt[i])
        {
            pq.push(x);
        }
        if (!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }
    }
    cout << sum;
}