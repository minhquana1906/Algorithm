//Tichpx - chuso 6 va 8
#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,string> M;
	queue<int> Q;
	int n,u,v;
	cin>>n;
	Q.push(8%n); M[8%n]="8";	
	Q.push(6%n); M[6%n]="6";
	while(Q.size() and M.find(0)==M.end())
	{
		u=Q.front(); Q.pop();
		v=(10*u+6)%n; if(M.find(v)==M.end()) {M[v]=M[u]+"6"; Q.push(v);}
		v=(10*u+8)%n; if(M.find(v)==M.end()) {M[v]=M[u]+"8"; Q.push(v);}
	}	
	if(M.find(0)==M.end()) cout<<"khong tong tai";
	else cout<<M[0];
//	for(auto z:M) cout<<"\n"<<z.first<<" "<<z.second;
}


