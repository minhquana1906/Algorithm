//Tichpx - cai dat stack bang mang dong-version 2
#include<bits/stdc++.h>
using namespace std;
#ifndef __stack__cpp__
#define __stack__cpp__
template <class T>
class STACK
{
	int n,cap;   //n so phan tu dang co, cap - suc chua  (capacity)
	T *buf;
	public:
	STACK() {n=cap=0;buf=NULL;}
	STACK(STACK<T> &Z)   //copyu
	{
		this->n=Z.n;
		this->cap=Z.cap;
		this->buf=new T[cap];
		for(int i=0;i<n;i++) this->buf[i]=Z.buf[i];
	}
	STACK<T> &operator=(STACK<T> &Z)  //toan tu gan
	{
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
#endif


