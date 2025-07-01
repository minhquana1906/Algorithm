//Tichpx - ham tim kiem nhi phan co san trong STL
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int a[]={4,7,15,15,19,37,39,45,45,62,75,89},n=sizeof(a)/sizeof(int);
	int x=15;
	int *p=lower_bound(a,a+n,x);//con tro tra ve vi tri phan tu dau tien >=x
	int *q=upper_bound(a,a+n,x);//con tro tra ve vi tri phan tu dau tien >x
	cout<<"\nVi tri dau tien >=x : "<<p-a<<" co gia tri "<<*p;
	cout<<"\nVi tri dau tien  >x : "<<q-a<<" co gia tri "<<*q;
}


