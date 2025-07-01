//Tichpx - bai toan doi tien 
#include<bits/stdc++.h>
using namespace std;
int n,q,M=1e4,C[105][10004]={},a[105];
void trace(int n,int M)
{
	if(C[n][M]==0) return;
	while(C[n][M]==C[n-1][M]) n--;
	trace(n,M-a[n]);
	cout<<a[n]<<" ";
}
int main()
{
	fill(C[0]+1,C[0]+M+1,1e9);
	cin>>n>>M;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		for(int j=0;j<=M;j++) 
		C[i][j]=j<a[i]?C[i-1][j]:min(C[i-1][j],1+C[i][j-a[i]]);
	}
	if(C[n][M]==1e9) cout<<"khong doi duoc";
	else
	{
		cout<<"so to it nhat "<<C[n][M]<<"\n";
		trace(n,M);
	}
}


