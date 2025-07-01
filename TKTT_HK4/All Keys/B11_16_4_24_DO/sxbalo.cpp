//Tichpx - sap xep ba lo khong lap
#include<bits/stdc++.h>
using namespace std;
int n,a[105],b[105], C[105][10004]={},M;
void trace(int n,int M)
{
	if(C[n][M]==0) return;
	while(C[n][M]==C[n-1][M]) n--;
	trace(n-1,M-a[n]);
	cout<<"\nChon vat kt "<<a[n]<<" gia tri "<<b[n];
}
int main()
{
	cin>>n>>M;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		for(int j=1;j<=M;j++)
		C[i][j]=j<a[i]?C[i-1][j]:max(C[i-1][j],b[i]+C[i-1][j-a[i]]);
	}
	cout<<C[n][M];
	trace(n,M);
}


