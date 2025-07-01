//Tichpx - Covid
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x,y;
	cin>>n>>m;
	list<int> A[n+5];
	while(m--) {cin>>x>>y; A[x].push_back(y);A[y].push_back(x);} 
	map<int,int> M,F;
	queue<int> Q;
	cin>>F[0];
	for(int i=0;i<F[0];i++) {cin>>x; M[x]=0; Q.push(x);}
	while(Q.size())
	{
		int u=Q.front();Q.pop();
		for(int v:A[u]) if (M.find(v)==M.end()) {Q.push(v); M[v]=M[u]+1; F[M[v]]++;}
	}
	for(auto f:F) cout<<"F"<<f.first<<": "<<f.second<<"\n";
}


