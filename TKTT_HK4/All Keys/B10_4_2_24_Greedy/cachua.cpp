//Tichpx - ca chua
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k,ans=0;
    cin >> n>>k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n,greater<int>());
    for(int i=0;i<n && a[i]>i*k;i++) ans+=a[i]-i*k;
    cout << ans;
    return 0;
}

