//Tichpx - THUAT TOAN  FLOYD
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,q,x,y,w;
	cin>>n>>m>>q;
	int a[n+5][n+5]={};
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++) if(i!=j) a[i][j]=1e9;
	while(m--)
	{
		cin>>x>>y>>w;
		a[x][y]=w;
	}
	for(int k=1;k<=n;k++)
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++) 
	a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
	while(q--)
	{
		cin>>x>>y;
		if(a[x][y]==1e9) a[x][y]=-1;
		cout<<a[x][y]<<"\n";
	}
}


