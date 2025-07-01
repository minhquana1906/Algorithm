//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={15,13,27,49,53,20,68,11,35,53},n=sizeof(a)/sizeof(int);
	make_heap(a,a+n);
	for(auto x:a) cout<<x<<" ";
}


