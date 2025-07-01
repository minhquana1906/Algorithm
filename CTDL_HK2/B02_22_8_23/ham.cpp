//Tichpx  - nhap 1 day tim max|ai-aj|
#include<bits/stdc++.h>
using namespace std;
int *nhap(int &n,char ten='a')
{
	cout<<"nhap so phan tu day "<<ten<<" ";
	cin>>n;
	int *a=new int[n+5];
	for(int i=1;i<=n;i++) {cout<<ten<<"["<<i<<"] = "; cin>>a[i];}
	return a;
}
int maxmin(int n,int *a,int ok=true)
{
	int s=a[1];
	for(int i=2;i<=n;i++) 
	if(s<a[i]==ok) 
		s=a[i];
	return s;
}
int main()
{
	int n,*a,m,*b;
	a=nhap(n);
//	b=nhap(m,'b');
	cout<<"\nDo lech day a "<<maxmin(n,a)-maxmin(n,a,false);
	delete []a;
	delete []b;
}


