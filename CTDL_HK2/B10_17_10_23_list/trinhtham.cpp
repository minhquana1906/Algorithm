//Tichpx - trinh tham
#include<bits/stdc++.h>
using namespace std;
int main()
{
	list<pair<int,int>>L;
	int n,k,x;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		while(L.size() && L.back().first<=x) L.pop_back();
		L.push_back({x,i});
		while(i-L.front().second>=k) L.pop_front();
		if(i>=k) cout<<L.front().first<<" ";		
	}
}


