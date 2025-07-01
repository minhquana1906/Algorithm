//Tichpx - cai dat slist bang danh sach lien ket don C+
#include<bits/stdc++.h>
using namespace std;
template <class T>
struct node
{
	T elem;
	node*next;
	node(T e,node<T>*N=0) {elem=e; next=N;}		
};
template <class T>   //bo lap xuoi
struct it_slist
{
	node<T>*cur=0;
	it_slist(node<T>*c=0) {cur=c;}
	T &operator*() {return cur->elem;}
	it_slist<T> operator++(int)
	{
		cur=cur->next;
		return cur;
	}
	it_slist<T> operator++()
	{
		node<T>*p=cur;
		cur=cur->next;
		return p;
	}
	bool operator!=(it_slist<T> it)
	{
		return cur!=it.cur;
	}
	it_slist<T> &operator=(it_slist<T> it)
	{
		this->cur=it.cur;
		return *this;
	}
};
template <class T>
struct slist
{
	int n=0;  //size
	node<T> *head=0,*trail=0;
	slist() {n=0; head=trail=0;}
	~slist(){while(n) pop_front();}
	slist(int k,T x)
	{
		n=0; head=trail=0;
		while(k--) push_front(x);
	}
	int size() {return n;}
	int empty() {return n==0;}
	T &front() {return head->elem;}
	T &back() {return trail->elem;}
	void push_front(T x)
	{
		head=new node<T>(x,head);
		if(n==0) trail=head;
		n++;
	}
	void push_back(T x)
	{
		if(n==0) return push_front(x);
		trail=trail->next=new node<T>(x);
		n++;
	}
	void travel() //tam thoi thay bo lap de duyet
	{
		for(node<T> *p=head;p!=NULL;p=p->next) cout<<p->elem<<" ";
	}
	void pop_front()
	{
		node<T>*p=head; 
		head=head->next;
		delete p;
		n--;
		if(n==0) trail=0;
	}
	void pop_back()
	{
		if(n==1) {delete head; head=trail=0;}
		else
		{
			node<T>*p=head;
			while(p->next!=trail) p=p->next;
			delete trail;
			trail=p; 
			trail->next=0;
		}
		n--;
	}
	void sort()
	{
		for(node<T> *p=head;p!=NULL;p=p->next)
		for(node<T> *q=p->next;q!=NULL;q=q->next)
		if(p->elem>q->elem) swap(p->elem,q->elem);
	}
	typedef it_slist<T> iterator;  //dinh nghia bo lap xuoi
	iterator begin() {return head;}
	iterator end()   {return iterator(NULL);}
	void erase(iterator it)
	{
		if(it.cur==head) return pop_front();
		if(it.cur==trail) return pop_back();
		node<T>*p=head,*q=it.cur;
		while(p->next!=q) p=p->next;
		p->next=q->next;
		delete q;
		n--;
	}
	void insert(iterator it, T x)
	{
		node<T>*p=it.cur;
		p->next=new node<T>(p->elem,p->next);
		p->elem=x;
		n++;
	}
};
int main()
{
	slist<int> L(5,4);
	for(int i=1;i<10;i++) if(i%2) L.push_front(i);else L.push_back(i);
	cout<<"\nL : ";L.travel();
	cout<<"\nsize "<<L.size();
	L.front()=L.back()=10;
	cout<<"\nL : ";L.travel();
	L.pop_back(); L.pop_front();
	cout<<"\nL : ";L.travel();
	L.sort();
	cout<<"\nL : ";L.travel();
	cout<<"\nxuoi L : "; for(slist<int>::iterator it=L.begin();it!=L.end();it++) cout<<*it<<" ";
	cout<<"\nauto L : "; for(auto x:L) cout<<x<<" ";
	auto it=L.begin(); it++;it++;it++;
	L.erase(it);
	cout<<"\nauto L : "; for(auto x:L) cout<<x<<" ";
	auto itt=L.begin(); itt++;itt++;itt++; itt++;
	L.insert(itt,-2);
	cout<<"\nauto L : "; for(auto x:L) cout<<x<<" ";
}


