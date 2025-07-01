//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={43,23,53,6,7,2,623,61,6,43},n=sizeof(a)/sizeof(int);
	sort(a+3,a+7,greater<int>());  //sap tang dan a[3]->a[6]
	for(auto x:a) cout<<x<<" ";
}


