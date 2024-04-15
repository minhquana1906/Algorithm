#include <bits/stdc++.h>
using namespace std;

// Cach1

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;
    sort(a, a + n);
    int res = 1, l = 1;
    for (int r = 2; r < n; r++)
    {
        while (a[l] + a[l + 1] <= a[r]) // vong while nam trong vong for nhung while chi chay n lan => O(n*2)
            l++;
        res = max(res, r - l + 1);
    }
    if (res < 3)
        cout << "Khong the tao ra day thoa man";
    else
        cout << res;
}

// Cach2
//  int main(){
//      int n;
//      cin>>n;
//      int a[0];
//      for(auto &x:a) cin>>x;
//      sort(a,a+n);
//      int res=0;
//      fo
//  }