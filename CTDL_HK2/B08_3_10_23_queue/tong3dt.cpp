//Tichpx - tong 3 da thuc
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;
	cin>>n;	vector<double> A(n+1);	for(auto &x:A) cin>>x;
	cin>>m;	vector<double> B(m+1);	for(auto &x:B) cin>>x;
	cin>>k;	vector<double> C(k+1);	for(auto &x:C) cin>>x;
	vector<double> D(1+max({n,m,k}),0);
	for(int i=0;i<A.size();i++) D[i]+=A[i];
	for(int i=0;i<B.size();i++) D[i]+=B[i];
	for(int i=0;i<C.size();i++) D[i]+=C[i];
	while(D.size()>1 && D.back()==0) D.pop_back();
	for(auto x:D) cout<<setprecision(3)<<fixed<<x<<" ";
}


