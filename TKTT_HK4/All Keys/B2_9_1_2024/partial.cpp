//Tichpx
#include<bits/stdc++.h>
using namespace std;
int nhan(int a,int b) {return a*b;}
int main()
{
	int a[]={4,7,2,8,1,6},n=sizeof(a)/sizeof(int);
	partial_sum(a,a+n,a,[](int a,int b){return a+b;});
	for(int x:a) cout<<x<<" ";
}


