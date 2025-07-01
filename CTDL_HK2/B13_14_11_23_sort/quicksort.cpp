//Tichpx - quick sort
#include<bits/stdc++.h>
using namespace std;

void Quick_Sort(int *a,int L,int R) //sx a[L]...a[R-1]
{
	if(L>=R-1) return;
	swap(a[L],a[(L+R)/2]);  //thuat toan duoc hoat dong nlogn
	int i=L; 
	for(int j=L+1;j<R;j++) 
	if(a[j]<a[L]) swap(a[++i],a[j]);
	swap(a[L],a[i]);
	Quick_Sort(a,L,i);
	Quick_Sort(a,i+1,R);
}

int main()
{
	int a[]={483,140,463,772,881,615,336,128,962,425};
	int n=sizeof(a)/sizeof(int);
	Quick_Sort(a,0,n);
	for(auto x:a) cout<<x<<" ";	
}


