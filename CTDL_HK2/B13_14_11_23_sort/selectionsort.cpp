//Tichpx
#include<bits/stdc++.h>
using namespace std;

template <class T,class K = less<T> >
void SelectSort(T *L,T *R,K cmp=less<T>())  //version 3 sx tu con tro L den con tro R-1 theo dk cmp
{
	for(T *i=L;i<R;i++)
	{
		T*p=i; 
		for(T *j=i+1;j<R;j++) if(cmp(*j,*p)) p=j;
		swap(*i,*p);
	}
}

int main()
{
	int a[]={432,636,23,46,234,6,234,54,35,53,34},n=sizeof(a)/sizeof(int);
	//sort(a+3,a+7,ss);  
	SelectSort(a,a+n,greater<int>());  
	for(auto x:a) cout<<x<<" ";
}


