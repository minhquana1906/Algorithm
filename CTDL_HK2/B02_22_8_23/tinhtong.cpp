//Tichpx
#include<bits/stdc++.h>
using namespace std;
double tong(int n,double f(double))
{
	double s=0;
	for(int i=1;i<=n;i++) s+=f(i);
	return s;
}
double bp(double x) {return x*x;}
double ff(double x) {return x*x+x;}
int main()
{
	int n;
	cin>>n;
	cout<<"S1 = "<<tong(n,bp)<<"\n";
	cout<<"S2 = "<<tong(n,sin)<<"\n";
	cout<<"S3 = "<<tong(n,sqrt)<<"\n";
	cout<<"S4 = "<<tong(n,[](double x)  {return x*x+x;})<<"\n";
}


