//Tichpx - luong nuoc
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,res=0;
	cin>>n;
	vector<int> A(n,0),B(n,0),C(n,0);
	for(auto &x:A)cin>>x;
	partial_sum(A.begin(),A.end(),B.begin(),[](int a,int b){return max(a,b);});
	partial_sum(A.rbegin(),A.rend(),C.rbegin(),[](int a,int b){return max(a,b);});
	for(int i=1;i<n-1;i++)
	{
		int z=min(B[i-1],C[i+1]);
		if(z>A[i]) res+=z-A[i];
	}
	cout<<res;
}


