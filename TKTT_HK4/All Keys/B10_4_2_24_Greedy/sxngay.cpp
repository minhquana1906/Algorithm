//Tichpx
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,pair<int,int>> day;
#define y first
#define m second.first
#define d second.second
int main()
{
	int n;
	cin>>n;
	day A[n];
	char c;
	for(auto &a:A) cin>>a.d>>c>>a.m>>c>>a.y;
	sort(A,A+n); 
	for(auto a:A) cout<<a.d<<"/"<<a.m<<"/"<<a.y<<"\n";
}


