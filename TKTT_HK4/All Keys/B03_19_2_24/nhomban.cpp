//Tichpx- nhom ban
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x,y,k=0;
	//freopen("g.txt","r",stdin);
	ifstream fin("g.txt");
	fin>>n>>m;
	vector<int> A[n+5];
	int d[n+5]={},G[n+5]={};   //d va G toan 0
	for(int i=1;i<=m;i++)
	{
		fin>>x>>y; 
		A[x].push_back(y);
		A[y].push_back(x);
	}
	for(int i=1;i<=n;i++)
	if(d[i]==0)
	{
		k++;
		d[i]=k; G[k]=1;
		stack<int> S; S.push(i);
		while(S.size())
		{
			int u=S.top();S.pop();
			for(int v:A[u]) if(d[v]==0) {d[v]=k;G[k]++; S.push(v);}
		}
	}
	cout<<k<<"\n"<<*max_element(G+1,G+k+1);
}


