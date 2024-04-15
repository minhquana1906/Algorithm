/*
b1: chia bài toán lớn thành nhiều bài toán con
b2: dùng đệ quy để giải bài toán con
b3: gom kết quả bài toán con thành kết quả bài toán lớn
*/

/*
Bài toán Tách Nhóm: Cho n người tách 2 nhóm thành 4 người ->tách đôi đến khi không tách
*/

#include <bits/stdc++.h>
using namespace std;

int tach(int n)
{
    if (n < 5 or n % 2)
        return 1;
    return tach(n / 2 - 2) + tach(n / 2 + 2); // so la    12
    // return tach(n / 2 - 2) + tach(n / 2 + 2) + 1;    //so node tren cay  23
    // return tach(n / 2 - 2) + tach(n / 2 + 2) + n; // tong gia tri cac node tren cay  222
}

void veCay(int n, string p = "\n")
{
    if (n > 4 and n % 2 == 0)
        veCay(n / 2 - 2, p + "\t");
    cout << p << n;
    if (n > 4 and n % 2 == 0)
        veCay(n / 2 + 2, p + "\t");
}

int main()
{
    // cout << tach(60) << endl;
    veCay(60);
    return 0;
}