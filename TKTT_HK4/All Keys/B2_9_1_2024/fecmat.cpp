//Tichpx - diem Fecmat
#include<bits/stdc++.h>
using namespace std;
typedef pair<double,double> Diem;
#define x first
#define y second
double kc(Diem A,Diem B)
{
	A.x-=B.x;
	A.y-=B.y;
	return sqrt(A.x*A.x+A.y*A.y);
}
int main()
{
	Diem A,B,C,M(0,0);
	cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y;
	double eps=1e-8,d=10,k=kc(M,A)+kc(M,B)+kc(M,c);
	//M=A;//{(A.x+B.x+C.x)/3,(A.y+B.y+C.y)/3};
	while(d>eps)
	{
		Diem Next[]={{M.x-d,M.y},{M.x+d,M.y},{M.x,M.y-d},{M.x,M.y+d}};
		for(auto N:Next)
		{
			double z=kc(N,A)+kc(N,B)+kc(N,C);
			if(z<k) {z=k,M=N; d*=2; break;}
		}
		d/=2;
	}
	cout<<M.x<<" "<<M.y;
}


