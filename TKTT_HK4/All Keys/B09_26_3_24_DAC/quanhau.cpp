//Tichpx
#include<bits/stdc++.h>
using namespace std;
map<int,bool> C,A,P;
int d=0;
void TRY(int *x,int k,int n)
{
	if(k-1==n) 
	{
		cout<<"\n"<<++d<<" : ";
		for(int i=1;i<=n;i++) cout<<"("<<i<<","<<x[i]<<") ";
		return;
	}
	for(int t=1;t<=n;t++)
	if(A[t]==0 && C[k-t]==0 && P[k+t]==0)
	{
		x[k]=t;
		A[t]=C[k-t]=P[k+t]=1;
		TRY(x,k+1,n);
		A[t]=C[k-t]=P[k+t]=0;
	}
}
int main()
{
	int n,x[100];
	cin>>n;
//	C[0]=1; P[n+1]=1; -> khong cho phep dat hau tren dc chinh va phu
	TRY(x,1,n);
}


