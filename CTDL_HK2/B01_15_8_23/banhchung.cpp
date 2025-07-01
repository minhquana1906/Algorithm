//Tichpx - banh chung
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,d[10]={},res=0;	// mang d toan so 0
	cin>>n;
	while(n--) 
	{
		cin>>a;
		d[a]++;
	}
	res=d[4]+d[3]+(d[2]+1)/2;
	d[1]-=d[3];
	if(d[2]%2) d[1]-=2;
	if(d[1]>0) res+=(d[1]+3)/4;
	cout<<res;
}


