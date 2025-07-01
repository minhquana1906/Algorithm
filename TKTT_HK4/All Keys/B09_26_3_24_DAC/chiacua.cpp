//Tichpx - chia cua
#include<bits/stdc++.h>
using namespace std;
int a[100],T=0,n,res=1e9;
void TRY(int k,int A,int B)
{
	if(k-1==n) {res=min(res,B-A); return;}
	if(A+a[k]<=T/2) TRY(k+1,A+a[k],B);
	if(B+a[k]<T/2+res) TRY(k+1,A,B+a[k]);
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) {cin>>a[i]; T+=a[i];} 
	TRY(1,0,0);
	cout<<res;
}


