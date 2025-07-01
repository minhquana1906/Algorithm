//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,res=0;
	cin>>n;
	long a[n];
	for(auto &x:a) cin>>x;
	for(int i=0;i<n-1;i++)
	{
		long z=*max_element(a+i+1,a+n-1);   //max(a[i+1]...a[n-1]
		if(a[i]<z) res+=z-a[i];
	}
	cout<<res;
}


