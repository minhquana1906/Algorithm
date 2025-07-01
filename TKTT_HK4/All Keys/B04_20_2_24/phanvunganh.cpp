//Tichpx
#include<bits/stdc++.h>
using namespace std;
int A[205][205],n,m;
int DFS(int u,int v)
{
	stack< pair<int,int> > S;
	int dem=1; 
	A[u][v]=1;
	S.push({u,v});
	while(S.size())
	{
		int x=S.top().first,y=S.top().second; 
		S.pop();
		for(int i=-1;i<=1;i++)
		for(int j=-1;j<=1;j++)
		if (A[x+i][y+j]==0)
		{
			A[x+i][y+j]=1;
			S.push({x+i,y+j});
			dem++;
		}
	}
	return dem;	
}
int main()
{
	//Nhap
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++) cin>>A[i][j];
	//Tao hang rao baoquanh ma tran toan 1
	for(int i=0;i<=n+1;i++) A[i][0]=A[i][m+1]=1;
	for(int j=0;j<=m+1;j++) A[0][j]=A[n+1][j]=1;
	//Thuattoan	
	int k=0,G[n*m+5]={};
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++) if(A[i][j]==0) {k++;G[k]=DFS(i,j);}
	//xuat
	sort(G+1,G+k+1);
	cout<<k<<"\n";
	for(int i=1;i<=k;i++) cout<<G[i]<<" ";
}


