//Tichpx lap lich
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> sk;
#define bd second
#define kt first
int main()
{
	int n,res=0,x=-INT_MAX;
	sk A[n];
	for(auto &a:A) cin>>a.bd>>a.kt;
	sort(A,A+n);
	for(auto a:A)
	if(a.bd>x) {res++;x=a.kt;}
	cout<<res;
}


