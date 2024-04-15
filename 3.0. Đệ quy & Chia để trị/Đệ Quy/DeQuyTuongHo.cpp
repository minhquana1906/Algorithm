#include <bits/stdc++.h>
using namespace std;

double COS(double x);

double SIN(double x)
{
    if (abs(x) < 1e-4)
        return x;
    return 2 * SIN(x / 2) * COS(x / 2);
}

double COS(double x)
{
    if (abs(x) < 1e-4)
        return 1;
    double u = cos(x / 2), v = sin(x / 2);
    return u * u - v * v;
}

int main()
{
    for (double x = -5; x <= 5; x += 0.5)
    {
        cout << sin(x) << " " << SIN(x) << endl;
        cout << cos(x) << " " << COS(x) << endl;
    }
    return 0;
}