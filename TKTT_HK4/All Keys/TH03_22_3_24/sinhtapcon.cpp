//Tichpx- sinh tap con
#include<bits/stdc++.h>
using namespace std;
//sinhtap con m phan tu cua tap {1,2...n}
void TRY(int *x,int k,int n,int m) //gia su da co x1...x[k-1]
{
	if(k-1==m) {for(int i=1;i<k;i++) cout<<x[i]<<" ";  cout<<"\n"; return;}
	for(x[k]=x[k-1]+1;x[k]<=n;x[k]++) TRY(x,k+1,n,m);
}
int main()
{
	int n,m,x[100]={}; 
	cin>>n>>m; 
	TRY(x,1,n,m);
}


