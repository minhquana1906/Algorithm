//Tichpx
#include<bits/stdc++.h>
using namespace std;

struct ps   //C+
{
	int t,m;  
	void nhap()   //ham viet ben trong cau truc duoc goi la phuong thuc cua doi tuong
	{
		cout<<"tu so : "; cin>>t;
		cout<<"mau so : "; cin>>m;
	}
};

int main()
{
	ps A;
	A.t=A.m=5;
	cout<<A.t<<"/"<<A.m<<"\n";
	A.nhap();
	cout<<A.t<<"/"<<A.m<<"\n";
	ps *B = &A,*C=new ps;
	B->nhap();
	C->nhap();
	cout<<A.t<<"/"<<A.m<<"\n";
	cout<<C->t<<"/"<<C->m<<"\n";
	delete C;
}


