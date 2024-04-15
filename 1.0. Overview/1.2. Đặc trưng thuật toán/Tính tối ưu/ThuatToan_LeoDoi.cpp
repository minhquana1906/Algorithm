#include <bits/stdc++.h>
using namespace std;

typedef pair<double, double> diem;
double kc(diem a, diem b)
{
    a.first -= b.first;
    a.second = b.second;
    return sqrt(a.first * a.first + a.second * a.second);
}

int main()
{
    diem a, b, c, m;
    cin >> a.first >> a.second >> b.first >> b.second >> c.first >> c.second;
    m =
}