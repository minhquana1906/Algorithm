//Tichpx- sinh hoan vi
#include<bits/stdc++.h>
using namespace std;
int d[100]={};
void TRY(int *x,int k,int n) //gia su da co x1...x[k-1]
{
	if(k-1==n) {for(int i=1;i<k;i++) cout<<x[i];  cout<<"\n"; return;}
	for(int t=1;t<=n;t++)
	if(d[t]==0)
	{
		x[k]=t; 
		d[t]=1;
		TRY(x,k+1,n);
		d[t]=0;        //lui
	}
}
int main()
{
	int n,x[100]; cin>>n; TRY(x,1,n);
}


