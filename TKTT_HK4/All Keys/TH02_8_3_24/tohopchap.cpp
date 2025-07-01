//Tichpx
#include<bits/stdc++.h>
using namespace std;
long long M=1e9+7;

long long POW(long long a, long long n)  //tinh a^n%M
{
	if(n==0) return 1;
	if(n%2) return POW(a*a%M,n/2)*a%M;
	return POW(a*a%M,n/2);
}

int main()
{
	long long A[100005]={1,1},B[100005]={1,1};
	for(int i=2;i<=1e5;i++)
	{
		A[i]=A[i-1]*i%M;
		B[i]=B[i-1]*POW(i,M-2)%M;
	}
	long long t,n,k;
	cin>>t;
	while(t--) {cin>>n>>k; cout<<A[n]*B[k]%M*B[n-k]%M<<"\n";}
}


