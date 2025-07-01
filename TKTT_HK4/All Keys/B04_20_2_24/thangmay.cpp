//Tichpx - thang may
#include<bits/stdc++.h>
using namespace std;
void path(int s,int f,int *p)
{
	if(s==f) cout<<s;
	else {path(s,p[f],p); cout<<"->"<<f;}
}
int main()
{
	int n,s,f,k,m;
	cin>>n>>k>>m>>s>>f;
	int d[n+5]={};
	int p[n+5]={};
	queue<int> Q;
	Q.push(s); 
	d[s]=1;
	while(Q.size() && d[f]==0)
	{
		int u=Q.front(); 
		Q.pop();
		for(int v:{u+k,u-m}) 
		if(1<=v && v<=n && d[v]==0)
		{
			d[v]=d[u]+1;
			p[v]=u;
			Q.push(v);
		}
	}
	if(d[f]) path(s,f,p);
	else cout<<"khong di duoc";//d[f]-1;
}


