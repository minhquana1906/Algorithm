//Tichpx - thang may
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,m,s,f;
	cin>>n>>s>>f>>k>>m;
	int d[n+5]={};
	queue<int> Q;
	Q.push(s);
	d[s]=1;
	while(d[f]==0 && Q.size()>0)
	{
		int u=Q.front(); Q.pop();
		for(int v:{k,-m})
		if (0<u+v && u+v<=n && d[u+v]==0) {d[u+v]=d[u]+1; Q.push(u+v);}
	}
	cout<<d[f]-1;
}


