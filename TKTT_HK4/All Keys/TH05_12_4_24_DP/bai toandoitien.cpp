//Tichpx - bai toan doi tien 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,x,M=1e4,C[M+5]={0};
	fill(C+1,C+M+1,1e9);
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		for(int j=x;j<=M;j++) C[j]=min(C[j],1+C[j-x]);
	}
	while(q--)
	{
		cin>>x;
		if(C[x]==1e9) C[x]=-1;
		cout<<C[x]<<"\n";	
	}	
}


