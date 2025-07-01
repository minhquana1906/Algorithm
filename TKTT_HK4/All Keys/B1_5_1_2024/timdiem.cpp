//Tichpx
#include<bits/stdc++.h>
using namespace std;
typedef pair<double,double> Diem;
double const ss=1e-4;
#define x first
#define y second
double bpkc(Diem A,Diem B){return (A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y);}
double dinhthuc(Diem A,Diem B) {return A.x*B.y-A.y*B.x;}
double dt(Diem A,Diem B,Diem C){return abs(dinhthuc(A,B)+dinhthuc(B,C)+dinhthuc(C,A))/2;}
Diem tim(Diem A,Diem B,Diem M)
{
	while(abs(A.x-B.x)>ss or abs(A.y-B.y)>ss)
	{
		Diem C={(A.x+B.x)/2,(A.y+B.y)/2};
		bpkc(A,M)>bpkc(B,M)?A=C:B=C;	
	}
	return A;
}
int main()
{
	Diem A,B,C,M;
	cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y>>M.x>>M.y;
	if(dt(A,B,C)<dt(A,B,M)+dt(B,C,M)+dt(C,A,M)) 
	{
		Diem A1=tim(B,C,M),B1=tim(A,C,M),C1=tim(A,B,M);
		if(bpkc(A1,M)>bpkc(B1,M)) A1=B1;
		if(bpkc(A1,M)>bpkc(C1,M)) A1=C1;
		M=A1;
	}
	cout<<M.x<<" "<<M.y;
	
}


