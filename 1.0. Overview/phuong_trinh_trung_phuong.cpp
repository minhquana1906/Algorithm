#include <bits/stdc++.h>
using namespace std;

vector<double> giai(double t)
{
    vector<double> res;
    if (t == 0)
        res.push_back(0);
    else if (t > 0)
    {
        res.push_back(t = sqrt(t)), res.push_back(-t);
    }
    return res;
}
void pttp(double a, double b, double c)
{
    double d = b * b - 4 * a * c;
    if (a == 0 && b == 0 && c == 0)
    {
        cout << "Vo so nghiem\n";
        return;
    }
    else if ((a == 0 and b == 0) or d < 0)
    {
        cout << "Vo nghiem\n";
        return;
    }
    vector<double> res;
    if (a == 0)
    {
        res = giai(-c / b);
    }
    else
    {
        if (d == 0)
        {
            res = giai(-b / 2 / a);
        }
        else
        {
            res = giai((-b - sqrt(d)) / 2 / a);
            for (auto z : giai((-b + sqrt(d)) / 2 / a))
                res.push_back(z);
        }
    }
    if (res.empty())
        cout << "vo nghiem";
    else
        for (auto z : res)
        {
            cout << z << " ";
        }
}
int main()
{
    double a, b, c;
    cout << "Nhap a,b,c: ";
    cin >> a >> b >> c;
    pttp(a, b, c);
}