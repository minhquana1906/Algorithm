//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,k,m,t,res=0;
	cin>>n>>k>>m;
	queue<int> Q;
	for(int i=1;i<=n+k-1;i++)
	{
		if(i<=n) cin>>x; else x=0;
		Q.push(x);
		while(Q.size()>k) Q.pop();
		t=0;
		while(Q.size() && Q.front()+t<=m) {t+=Q.front();Q.pop();}
		if(Q.size()) {Q.front()-=m-t; t=m;}
		res+=t;
	}
	cout<<res;
}


