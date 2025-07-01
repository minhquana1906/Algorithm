//Tichpx - cai dat stack bang mang dong-version 2
#include<bits/stdc++.h>
using namespace std;
template <class T>
class STACK
{
	int n,cap;   //n so phan tu dang co, cap - suc chua  (capacity)
	T *buf;
	public:
	STACK() {n=cap=0;buf=NULL;}
	STACK(STACK<T> &Z)   //copyu
	{
	//	cout<<"\ntoan tu copy\n";
		this->n=Z.n;
		this->cap=Z.cap;
		this->buf=new T[cap];
		for(int i=0;i<n;i++) this->buf[i]=Z.buf[i];
	}
	STACK<T> &operator=(STACK<T> &Z)
	{
		cout<<"\ntoan tu gan\n";
		this->n=Z.n;
		this->cap=Z.cap;
		this->buf=new T[cap];
		for(int i=0;i<n;i++) this->buf[i]=Z.buf[i];
		return *this;
	}
	
	~STACK() {if(buf) delete []buf;}
	void push(T x) 
	{
		if(n==cap) 
		{
			cap=2*cap+1;   //mo rong kich thuoc
//			T *temp=new T[cap];
//			for(int i=0;i<n;i++) temp[i]=buf[i];
//			if(buf) delete[]buf;
//			buf=temp;
			T*tem=buf;
			buf=new T[cap];
			for(int i=0;i<n;i++) buf[i]=tem[i];
			if(tem) delete []tem;
		}
		buf[n++]=x;
	}
	void pop() {n--;}
	T &top() {return buf[n-1];}
	int size(){return n;}
	bool empty(){return n==0;}
};
int main()
{
	STACK<string> S;
	for(auto x:{"ha","noi","mua","khai","giang"}) S.push(x);
	STACK<string> Z;
	Z=S;
	Z.top()="truong";
	while(not Z.empty())
	{
		cout<<Z.top()<<" ";
		Z.pop();
	}
}


