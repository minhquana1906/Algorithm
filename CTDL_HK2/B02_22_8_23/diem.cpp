//Tichpx
#include<bits/stdc++.h>
using namespace std;

struct diem
{
	double x,y;
	void nhap() {cout<<"nhap toa do : "; cin>>x>>y;}
	void xuat() {cout<<"("<<x<<","<<y<<")";}
	double kc(diem M)  //khoang cach tu diem hien tai (x,y) toi diem M (M.x,M.y)
	{
		return sqrt((x-M.x)*(x-M.x)+(y-M.y)*(y-M.y));
	}
	double dt(diem M) //dinh thuc tu diem hien tai sang M
	{
		return x*M.y-y*M.x;
	}
};
struct tamgiac
{
	diem A,B,C;
	void nhap();
	double chuvi();
	double dientich();
};

void tamgiac::nhap()
{
	A.nhap();
	B.nhap();
	C.nhap();
}
double tamgiac::chuvi() {return A.kc(B)+B.kc(C)+C.kc(A);}
double tamgiac::dientich()
{
	return abs(A.dt(B)+B.dt(C)+C.dt(A))/2;
}

int main()
{
//	diem A,B;
//	A.nhap();
//	B.nhap();
//	cout<<"\nA : "; A.xuat();
//	cout<<"\nB : "; B.xuat();
//	cout<<"\nKhoang cach A den B "<<A.kc(B);
//	cout<<"\nKhoang cach B den A "<<B.kc(A);
	tamgiac P;
	P.nhap();
	cout<<"\nDien tich tam giac "<<P.dientich();
	cout<<"\nchu vi tam giac "<<P.chuvi();
}


