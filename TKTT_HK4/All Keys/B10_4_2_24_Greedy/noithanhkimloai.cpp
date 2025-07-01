//Tichpx - noi thanh kim loai
#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int,vector<int>,greater<int>>Q;
	int n,x,res=0;
	cin>>n;
	while(n--) {cin>>x; Q.push(x);}
	while(Q.size()>1)
	{
		x=Q.top();Q.pop();
		x+=Q.top();Q.pop();
		res+=x;
		Q.push(x);
	}
	cout<<res;	
}


