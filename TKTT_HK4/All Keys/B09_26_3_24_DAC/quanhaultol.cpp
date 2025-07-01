//Tichpx - quan hau ko can in phuong an chi dem tong so ket qua
#include<bits/stdc++.h>
using namespace std;
//map<int,bool> C,A,P;
int A[1000]={},Z[2000]={},*C=Z+1000,P[2000]={};
int d=0;
void TRY(int k,int n)
{
	if(k-1==n) 
	{
		d++;
		return;
	}
	for(int t=1;t<=n;t++)
	if(A[t]==0 && C[k-t]==0 && P[k+t]==0)
	{
		A[t]=C[k-t]=P[k+t]=1;
		TRY(k+1,n);
		A[t]=C[k-t]=P[k+t]=0;
	}
}
int main()
{
	int n;
	cin>>n;
//	C[0]=1; P[n+1]=1; -> khong cho phep dat hau tren dc chinh va phu
	TRY(1,n);
	cout<<d;
}


