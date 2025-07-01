//Tichpx - trong C co san ham qsort
#include<bits/stdc++.h>
using namespace std;
void QuickSort(int *a,int L,int R) //sx a[L]...a[R-1]
{
	if(L>=R-1) return;
	swap(a[L],a[(L+R)/2]);  //lay pt giua day la chot x dua ra vi tri L
	int i=L;
	for(int j=L+1;j<R;j++)
	if(a[j]<a[L]) swap(a[++i],a[j]);
	swap(a[L],a[i]);
	QuickSort(a,L,i);
	QuickSort(a,i+1,R);
}
template <class T,class K=less<T> >
void QSort(T *L,T *R,K cmp=less<T>()) //sx tu con tro L den con tro R-1
{
	if(L>=R-1) return;
	swap(*L,*(L+(R-L)/2));  //lay pt giua day la chot x dua ra vi tri L
	T *i=L;
	for(T*j=L+1;j<R;j++)
	if(cmp(*j,*L)) swap(*++i,*j);
	swap(*L,*i);
	QSort(L,i,cmp);
	QSort(i+1,R,cmp);
}
int main()
{
	int a[]={4,217,22,38,4,18,3,42,24,9},n=sizeof(a)/sizeof(int);
	QSort(a,a+n,greater<int>());
	for(auto x:a) cout<<x<<" ";
}


