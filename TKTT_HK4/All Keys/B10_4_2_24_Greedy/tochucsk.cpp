//Tichpx tochuc sk
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> sk;
#define bd second
#define kt first
bool cmp(sk a,sk b) {return a.kt<b.kt;}
int main()
{
	int n,res=0,x=-INT_MAX,y=-INT_MAX;
	cin>>n;
	sk A[n];
	for(auto &a:A) cin>>a.bd>>a.kt;
	sort(A,A+n,cmp);
	for(auto a:A)
	{
		if(x<y) swap(x,y);
		if(a.bd>x) {res++;x=a.kt;}
		else if(a.bd>y) {res++;y=a.kt;}
	}
	cout<<res;
}


