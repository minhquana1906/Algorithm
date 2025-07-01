//Tichpx- sinh hoan vi
#include<bits/stdc++.h>
using namespace std;
void TRY(int *x,int k,int n) //gia su da co x1...x[k-1]
{
	if(k-1==n) {for(int i=1;i<k;i++) cout<<x[i];  cout<<"\n"; return;}
	
	for(int t=1;t<=n;t++)
	{
		int ok=1;
		for(int i=1;i<k && ok;i++) if(x[i]==t) ok=0;
		if(ok) {x[k]=t; TRY(x,k+1,n);}
	}
}
int main()
{
	int n,x[100]; cin>>n; TRY(x,1,n);
}


