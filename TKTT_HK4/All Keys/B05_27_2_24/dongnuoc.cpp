//Tichpx
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> TT;
map<TT,TT> P;  //mang cha
void path(TT v)
{
	if(v.first==0 && v.second==0) cout<<"(0,0)";
	else {path(P[v]); cout<<"->("<<v.first<<","<<v.second<<")";}
}
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	queue<TT> Q;
	map<TT,int> M;
	M[{0,0}]=0;
	Q.push({0,0});
	while(Q.size())
	{
		int x=Q.front().first,y=Q.front().second,z=x+y;
		Q.pop();
		TT Next[]={{0,y},{n,y},{x,0},{x,m},{max(0,z-m),min(z,m)},{min(z,n),max(0,z-n)}};
		for(auto v:Next)
		if(M.find(v)==M.end())
		{
			M[v]=M[{x,y}]+1;
			Q.push(v);
			P[v]={x,y};
			if(v.first==k or v.second==k) {cout<<M[v]<<"\n"; path(v); return 0;}
		}
	}
	cout<<"khong dong duoc";
}


