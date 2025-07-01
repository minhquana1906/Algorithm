#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second
typedef pair<double, double> Diem;

double dt(Diem A, Diem B) { return A.x * B.y - B.x * A.y; }
double S(Diem A, Diem B) { return abs(dt(A, B) + dt(B, C) + dt(C, A)) / 2; }
double bpkc(Diem A, Diem B) { return (A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y); }
Diem tim(Diem A, Diem B, Diem M)
{
    while (abs())
}
int main()
{
}