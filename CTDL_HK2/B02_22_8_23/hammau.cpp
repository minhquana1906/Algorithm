//Tichpx
#include<bits/stdc++.h>
using namespace std;

template <class T>
int nhap(T *&a)  //nhap day co cap phat bo nho dong, tra ve so phan tu duoc nhap
{
	int n;
	cin>>n;
	a=new T[n+5];
	for(int i=1;i<=n;i++) cin>>a[i];
	return n;
}

template <class K>
K tong(int n,K *a)
{
	K s=0;
	for(int i=1;i<=n;i++) s+=a[i];
	return s;
}

int main()
{
	int n,m,k,*a;
	double *b;
	complex<double> *c;
	n=nhap(a); cout<<"\nTong day a = "<<tong(n,a)<<"\n"; delete []a;
	m=nhap(b); cout<<"\nTong day b = "<<tong(m,b)<<"\n"; delete []b;
	k=nhap(c); cout<<"\nTong day c = "<<tong<complex<double> > (k,c)<<"\n"; delete []c;
	
}


