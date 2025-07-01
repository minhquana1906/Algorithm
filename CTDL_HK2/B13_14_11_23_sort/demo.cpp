//Tichpx
#include<bits/stdc++.h>
using namespace std;
bool ss(int a,int b) 
{
	if(a%2==b%2) return a%2?a>b:a<b;
	return a%2<b%2;
}
int main()
{
	int a[]={432,636,23,46,234,6,234,54,35,53,34},n=sizeof(a)/sizeof(int);
	//sort(a+3,a+7,ss);  
	sort(a,a+n,[](int a,int b){return a>b;});  
	for(auto x:a) cout<<x<<" ";
}


