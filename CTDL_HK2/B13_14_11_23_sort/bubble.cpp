//Tichpx
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int *a,int n)  //version 1
{
	for(int i=1;i<n;i++)
	for(int j=n;j>i;j--) 
	if(a[j]<a[j-1]) swap(a[j],a[j-1]);
}
template <class T>
void Bubble_sort(T *L,T *R)  //version 2 sx tu con tro L den con tro R-1
{
	for(T *i=L;i<R;i++)
	for(T *j=R-1;j>i;j--) 
	if(*j<*(j-1)) swap(*j,*(j-1));
}

template <class T,class K = less<T> >
void BSort(T *L,T *R,K cmp=less<T>())  //version 3 sx tu con tro L den con tro R-1 theo dk cmp
{
	for(T *i=L;i<R;i++)
	for(T *j=R-1;j>i;j--) 
	if(cmp(*j,*(j-1))) swap(*j,*(j-1));
}

int main()
{
	int a[]={432,636,23,46,234,6,234,54,35,53,34},n=sizeof(a)/sizeof(int);
	//sort(a+3,a+7,ss);  
	BSort(a,a+n,greater<int>());  
	for(auto x:a) cout<<x<<" ";
}


