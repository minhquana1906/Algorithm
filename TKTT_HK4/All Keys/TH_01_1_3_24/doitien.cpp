//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,m;
	cin>>n;
	int a[n];
	for(auto &x:a) cin>>x;
	queue<int> Q;
	map<int,int> M;
	Q.push(0); M[0]=0;
	while(Q.size())
	{
		int u=Q.front(); Q.pop();
		for(auto v:a)
		if(v+u<=20 && M.find(v+u)==M.end())	{Q.push(v+u);	M[v+u]=M[u]+1;}
	}
	cin>>q;
	while(q--)
	{
		cin>>m;
		if(M.find(m)==M.end())M[m]=-1;
		cout<<M[m]<<"\n";
	}
}


