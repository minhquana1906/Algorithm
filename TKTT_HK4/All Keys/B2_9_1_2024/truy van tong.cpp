//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,L,R;
	cin>>n;
	long a[n+5],b[n+5]={};
	for(int i=1;i<=n;i++) {cin>>a[i]; b[i]=b[i-1]+a[i];}
	cin>>m;
	while(m--)  //thuc hien m
	{
		cin>>L>>R;
		cout<<b[R]-b[L-1]<<"\n";
	}
}


