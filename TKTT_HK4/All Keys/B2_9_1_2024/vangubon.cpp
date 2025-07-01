//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,res=0;
	cin>>n;
	long a[n];
	for(auto &x:a) cin>>x;  //a[0]...a[n-1]
 	long t=a[n-1];
 	for(int i=n-2;i>=0;i--)
 		if(t<a[i]) t=a[i];
		else res+=t-a[i];	
	cout<<res;
}


