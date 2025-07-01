//Tichpx - cai dat stack
#include<bits/stdc++.h>
using namespace std;
template <class T> 
struct node
{
	T elem;
	node *next;
	node(T x,node<T> *N=0){elem=x;next=N;} //tao 1 node	
};
template <class T>
struct Stack
{
	int n;  //so phan tu dang co
	node<T> *Head=0;
	Stack(){n=0;Head=NULL;}
	~Stack() {node<T>*p=Head; while(p){Head=p->next; delete p;p=Head;} n=0;}	
	int size() {return n;}
	bool empty() {return n==0;}
	T &top() {return Head->elem;}
	void pop() {node<T> *p=Head; Head=p->next; delete p; n--;}
	void push(T x){Head=new node<T>(x,Head); n++;}
};
int main()
{
	Stack<int> S;
	for(int x:{24,643,64,765,7,65,7}) S.push(x);
	while(S.size())
	{
		cout<<S.top()<<" ";
		S.pop();
	}
}


