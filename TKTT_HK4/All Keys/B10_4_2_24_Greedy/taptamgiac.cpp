//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,res=2,i,j=0;
	cin>>n;
	int a[n];
	for(auto &x:a) cin>>x;
	sort(a,a+n);
	for(i=2;i<n;i++)
	{
		while(a[j]+a[j+1]<=a[i])j++;
		res=max(res,i-j+1);
	}
	if(res>3) cout<<res;
	else cout<<"khong co tap tam giac";
}


