//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,res=0,i,j=0;
	cin>>n>>m;
	int a[n],b[m];
	for(auto &x:a) cin>>x;
	for(auto &x:b) cin>>x;
	sort(a,a+n);
	sort(b,b+m);
	for(i=0;i<m;i++)
	{
		while(j<n && a[j]<=b[i]) j++;
		if(j<n){res++;j++;}
	}
	cout<<res;
}


