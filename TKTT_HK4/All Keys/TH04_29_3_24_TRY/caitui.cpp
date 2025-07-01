//Tichpx - cai tui
#include<bits/stdc++.h>
using namespace std;
int a[25],n,M,res=0;
void TRY(int k,int T)
{
	if(res==M) return;
	if(k-1==n) res=max(res,T);
	else
	{
		TRY(k+1,T);  //khong lay vat k
		if(T+a[k]<=M) TRY(k+1,T+a[k]);
	}
}
int main()
{
	cin>>n>>M;
	for(int i=1;i<=n;i++) cin>>a[i];
	TRY(1,0);
	cout<<res;
}


