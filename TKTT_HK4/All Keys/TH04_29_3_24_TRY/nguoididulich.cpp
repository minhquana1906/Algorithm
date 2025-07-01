//Tichpx -nguoi di du lich
#include<bits/stdc++.h>
using namespace std;
int a[50][50],n,C[2500],m=0,res=1e9,d[50]={};

void TRY(int k,int x,int T) //x[1]...x[k-1]
{
	if(k-1==n) {res=min(res,T+a[x][1]); return;}
	for(int t=2;t<=n;t++)
	if(d[t]==0 && T+a[x][t]+C[n-(k-1)]<res) 
	{
		d[t]=1;
		TRY(k+1,t,T+a[x][t]);
		d[t]=0;
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++) {cin>>a[i][j]; C[++m]=a[i][j];}
	sort(C+1,C+m+1);
	d[1]=1;
	TRY(2,1,0);
	cout<<res;
}


