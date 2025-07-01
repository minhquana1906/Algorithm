//Tichpx
#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b) {return a<b;}

bool sosanh(int a,int b) {return a%2==b%2?a<b:a%2<b%2;}

void sapxep(int n,int *a,bool ss(int,int))
{
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(ss(a[j],a[i]))   {a[i]^=a[j];a[j]^=a[i];a[i]^=a[j];}// swap(a[i],a[j]);
}
int main()
{
	int a[]={42,63,64,775,84,581,4,53},n=sizeof(a)/sizeof(a[0]);
//	sapxep(n,a,cmp);
	sapxep(n,a,sosanh);
	for(auto x:a) cout<<x<<" ";
}


