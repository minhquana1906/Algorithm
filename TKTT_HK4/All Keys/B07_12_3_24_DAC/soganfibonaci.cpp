//Tichpx
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
//#define LL long long

LL M=1e9+7;
void Fibo(LL n,LL&a,LL&b)
{
	if(n==0) {a=1;b=0;return;}
	LL x,y;
	Fibo(n/2,x,y); {a=(x*x%M+y*y%M)%M; b=(x*y%M+y*(x-y)%M)%M;}
	if(n%2) {a=(a+b)%M;b=(a-b)%M;}
}

int main()
{
	LL n,a,b;
	cin>>n;
	Fibo(n+1,a,b);
	cout<<(a-1+M)%M;	
}


