//Tichpx- cai dat queue bang mang dong
#include<bits/stdc++.h>
using namespace std;
#ifndef __queue_cpp__
#define __queue_cpp__
template <class T> 
class QUEUE
{
	int n,cap,F,L;   //n-size, cap-capacity, F phan tu dung dau, L-1 pt cuoi
	T *buf;
	public:
		QUEUE() {n=cap=0; F=L=0; buf=NULL;}
		~QUEUE() {if(buf) delete []buf;}
		bool empty() {return n==0;}
		int size() {return n;}
		T &front() {return buf[F];}
		T &back()  {return buf[(L?L:cap)-1];}
		void pop() {n--;F=(F+1)%cap;}
		void push(T x)
		{
			if(n==cap)
			{
				T*tem=buf;
				cap=cap*2+1;
				buf=new T[cap];
				for(int i=F,j=0;i<F+n;i++,j++) buf[j]=tem[i%cap];
				F=0;
				if(n==0)L=0; else L=n;
				if(tem) delete []tem;
			}
			buf[L]=x;
			L=(L+1)%cap;
			n++;
		}
};
#endif
//int main()
//{
//	QUEUE<int> Q;
//	for(int x:{7,4,2,8,3,9,2,7}) 
//		Q.push(x);
//	Q.front()=Q.back()=123;
//	while(Q.size())
//	{
//		cout<<Q.front()<<" ";
//		Q.pop();
//	}
//}




