//Tichpx - merge sort
#include<bits/stdc++.h>
using namespace std;
template <class T,class K>
void mergesort(T *L,T *R,T *B,K cmp)   //sx tu con tro L den con tro R-1
{
	if(L>=R-1) return;
	T*M=L+(R-L)/2;
	mergesort(L,M,B,cmp);
	mergesort(M,R,B,cmp);
	//tron 2 day tang thanh 1 day tang
	for(T*i=L,*j=M,*k=B;i<M or j<R;k++)
		*k=(j>=R or (i<M && j<R && cmp(*i,*j)))?*i++:*j++;
	for(T *i=L,*k=B
	;i<R;i++,k++) *i=*k;	
}
template <class T,class K=less<T> >
void Msort(T *L,T *R,K cmp=less<T>())   //sx tu con tro L den con tro R-1
{
	T *B=new T[R-L+5];
	mergesort(L,R,B,cmp);
	delete []B;
}

int main()
{
	int a[]={432,636,23,46,234,6,234,54,35,53,34},n=sizeof(a)/sizeof(int);
	Msort(a,a+n,greater<int>());  
	for(auto x:a) cout<<x<<" ";
}


