//Tichpx - giai thua so lon
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,m;
	cin>>n;
	vector<int> A(1,1); 
	for(;n>1;n--)
	{
		m=0;
		for(auto &x:A)
		{
			m+=x*n;
			x=m%10;
			m/=10;
		}
		for(;m>0;m/=10) A.push_back(m%10);
	}
	reverse(A.begin(),A.end());
	for(auto x:A) cout<<x;
}


