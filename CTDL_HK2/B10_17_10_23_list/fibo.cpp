//Tichpx
#include<bits/stdc++.h>
using namespace std;

void Pow(int n,long &a,long &b)
{
	if(n==0) {a=1;b=0; return;}
	long x,y;
	Pow(n/2,x,y);
	a=x*x+y*y;
	b=2*x*y-y*y;
	if (n%2!=0) {a=a+b,b=a-b;}
}
int main()
{
	for(int k=0;k<=20;k++)
	{
		long a,b;
		Pow(k,a,b);
		cout<<b<<" ";
	}
}


