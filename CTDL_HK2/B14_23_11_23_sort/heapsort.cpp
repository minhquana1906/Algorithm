//Tichpx - heap  sort
#include<bits/stdc++.h>
using namespace std;
//void heapfy(int *a,int n,int k)
//{
//	if(2*k+1>=n) return;
//	int p=2*k+1;
//	if(p+1<n && a[p]<a[p+1]) p++;
//	if(a[k]<a[p]) {swap(a[p],a[k]); heapfy(a,n,p);}
//}
//void heapsort(int *a,int n)
//{
//	for(int i=n-1;i>=0;i--) heapfy(a,n,i);  //tao dong
//	for(int i=n-1;i>0;i--)   //tao dong
//	{
//		swap(a[0],a[i]);
//		heapfy(a,i,0);
//	}
//}
template <class T,class K>
void heapfy(T *L,T *R,T *p,K cmp)
{
	int k=p-L;
	if(L+2*k+1>=R) return;
	T *q=L+2*k+1;
	if(q+1<R && cmp(*q,*(q+1))) q++;
	if(cmp(*p,*q)) {swap(*p,*q); heapfy(L,R,q,cmp);}
}
template <class T,class K=less<T> >
void heapsort(T *L,T *R,K cmp=less<T>())
{
	for(T *i=R-1;i>=L;i--) heapfy(L,R,i,cmp);  //tao dong
	for(T *i=R-1;i>=L;i--)   //tao dong
	{
		swap(*L,*i);
		heapfy(L,i,L,cmp);
	}
}
int main()
{
	int a[]={4,217,22,338,4,18,3,42,24,9};
	int n=sizeof(a)/sizeof(int);
	heapsort(a,a+n,greater<int>());
	for(auto x:a) cout<<x<<" ";
}


