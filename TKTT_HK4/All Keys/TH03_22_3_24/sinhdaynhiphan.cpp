//Tichpx
#include<bits/stdc++.h>
using namespace std;

void TRY(int *x,int k,int n)  //gia su x[0]..x[k-1]
{
	if(k==n) 
	{
		for(int i=0;i<n;i++) cout<<x[i];
		cout<<"\n";
	}
	else
	{
		x[k]=0;  TRY(x,k+1,n);
		x[k]=1;  TRY(x,k+1,n);
	}
}
int main()
{
	int x[100],n;
	cin>>n;
	TRY(x,0,n);
}


