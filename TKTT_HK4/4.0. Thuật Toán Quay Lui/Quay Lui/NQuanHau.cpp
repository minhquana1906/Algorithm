#include <bits/stdc++.h>
using namespace std;

map<int, int> C, P, A;
int n, d = 0, x[100];
void TRY(int k)
{
    // cout << "k: " << k << " x[" << k << "]" << x[k] << endl;
    cout << "TRY " << k << endl;
    if (k - 1 == n)
    {
        cout << "\n"
             << ++d << " : ";
        for (int i = 1; i <= n; i++)
        {
            cout << "(" << i << ", " << x[i] << ") ";
        }
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "a[" << i << "] " << A[i]
             << " c[" << k - i << "] " << C[k - i]
             << " p[" << k + i << "] " << P[k + i] << endl;
        if (A[i] == 0 && C[k - i] == 0 && P[k + i] == 0)
        {
            A[i] = C[k - i] = P[k + i] = 1; // Nếu có thể đặt quân hậu, đánh dấu hàng i, đường chéo chính k - i, và đường chéo phụ k + i là đã có quân hậu.

            x[k] = i; // Đặt quân hậu thứ k vào hàng i.
            cout << "new x[" << k << "]: " << x[k] << endl;

            TRY(k + 1); // Thử đặt quân hậu tiếp theo.
            cout << "TRY " << k << endl;

            A[i] = C[k - i] = P[k + i] = 0;
            // Nếu không thể tìm được giải pháp khi đặt quân hậu thứ k vào hàng i, hủy đánh dấu và thử đặt quân hậu thứ k vào hàng khác.
        }
    }
}

int main()
{
    cin >> n;
    // C[0] = P[n + 1] = 1;
    cout << "\nCac cach dat " << n << " quan hau: \n";
    TRY(1);
}