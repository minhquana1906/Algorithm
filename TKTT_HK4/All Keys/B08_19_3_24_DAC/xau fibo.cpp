//Tichpx - xau fibonacci
#include<bits/stdc++.h>
using namespace std;
long long F[105]={0,1,1};
char xFib(long long k,long long n)
{
	if(n==1) return 'A';
	if(n==2) return 'B';
	return k<=F[n-2]?xFib(k,n-2):xFib(k-F[n-2],n-1);
}
int main()
{
	for(int i=3;i<100;i++) F[i]=F[i-1]+F[i-2];
	long long n,k,t;
	cin>>t; while(t--) {cin>>n>>k; cout<<xFib(k,n)<<"\n";}
}


