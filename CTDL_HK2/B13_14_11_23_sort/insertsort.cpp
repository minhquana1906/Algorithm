//Tichpx
#include<bits/stdc++.h>
using namespace std;

template <class T,class K = less<T> >
void InsertSort(T *L,T *R,K cmp=less<T>())  //version 3 sx tu con tro L den con tro R-1 theo dk cmp
{
	for(T *i=L+1;i<R;i++)
	{
		T x=*i,*j=i-1;
		while(j>=L && cmp(x,*j)) *(j+1)=*j--;
		*(j+1)=x;
	}
}

int main()
{
	int a[]={432,636,23,46,234,6,234,54,35,53,34},n=sizeof(a)/sizeof(int);
	//sort(a+3,a+7,ss);  
	InsertSort(a,a+n,greater<int>());  
	for(auto x:a) cout<<x<<" ";
}


