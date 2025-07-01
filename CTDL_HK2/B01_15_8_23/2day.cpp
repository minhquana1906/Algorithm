//Tichpx - nhap 2 day so thuc co cap phat bo nho dong so sanh tong chung voi nhau
//chu y bi danh la cua bien khong co bi danh cua hang
#include<bits/stdc++.h>
using namespace std;
void nhap(int &n,double *&a)
{
	cin>>n;
	a=new double[n+5];
	for(int i=1;i<=n;i++) cin>>a[i];
}
double tong(int &n,double *a)
{
	double s=0;
	for(int i=1;i<=n;i++) s+=a[i];
	return s;
}
int main()
{
	int n,m;
	double *x,*y;
	nhap(n,x);
	nhap(m,y);
	int t1=tong(3,x),t2=tong(5,y);
	if(t1==t2) cout<<"tong bang nhau";
	else cout<<(t1<t2?"day a tong be hon b":"day a tong lon hon b");
	delete []x;
	delete []y;
}


