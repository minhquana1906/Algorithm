//Tichpx
#include<bits/stdc++.h>
using namespace std;
int a[1000],n,res=1e9,M;
void TRY(int k,int T,int t)
{
	if(k==n)
	{
		if((M-T)%a[n]==0)res=min(res,t+(M-T)/a[n]);
		return;
	}
//	for(int z=0;z+t<res && T+a[k]*z<=M;z++) TRY(k+1,T+a[k]*z,t+z);
	for(int z=min(res-t-1,(M-T)/a[k]);z>=0;z--) TRY(k+1,T+a[k]*z,t+z);
}
int main()
{
	cin>>n>>M;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,greater<int>());
	TRY(1,0,0);
	cout<<res;
}


