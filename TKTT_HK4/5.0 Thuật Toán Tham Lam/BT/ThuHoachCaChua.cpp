/*
Titi là một nông dân có một cánh đồng cà chua gồm n thửa ruộng, gần Tết đến cũng là mùa cà chua chính rộ. Một mình Titi chỉ có thể mỗi ngày thu hoạch cà chua trên một thửa ruộng mà thôi. Tốc độ chín của cà chua quá nhanh nên mỗi ngày thửa ruộng nào chưa thu hoạch thì sản lượng giảm k đơn vị so với ngày hôm trước. Bạn hãy giúp Titi tính toán để thu hoạch cà chua được nhiều nhất nhé.

Input
Dòng thứ nhất số nguyên dương n là số thửa ruộng ( 1 ≤ n ≤ 10^5) và số nguyên k là độ giảm sản lượng trên mỗi thửa ruộng của từng ngày (1<=k<=10^5)

Dòng tiếp theo chứa n số nguyên dương là sản lượng cà chua ban đầu là các số nguyên không âm có giá trị không vượt quá
.

Output
Một số nguyên là giá trị sản lượng lớn nhất thu được

Example
Input

Copy
8 2
4 7 2 8 4 8 3 2
Output

Copy
17
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, res = 0;

    cin >> n >> k;
    int a[n];
    for (auto &x : a)
        cin >> x;
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n && a[i] > i * k; i++)
    {
        res += a[i] - i * k;
    }
    cout << res;
}