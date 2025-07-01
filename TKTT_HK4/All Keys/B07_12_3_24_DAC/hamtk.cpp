//Tichpx
//lower_bound vs upper_bound

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={3,7,10,10,10,12,17,22,45,64,64,87},n=sizeof(a)/sizeof(int);
	//lower_bound tim phan tu dau tien lon hon hoac bang x
	int *p=lower_bound(a,a+n,10);  cout<<*p<<"  tai vi tri "<<p-a<<"\n";
	//upper_bound tim phan tu dau tien lon hon han x	
	int *q=upper_bound(a,a+n,10);  cout<<*q<<"  tai vi tri "<<q-a<<"\n";
}


