//Tichpx - cai dat danh sach lien ket kep (double - link - list)
#include<bits/stdc++.h>
using namespace std;
template <class T>
struct node
{
	T elem;
	node *next,*prev;
	node(T e,node<T>*P=0,node<T>*N=0) {elem=e;prev=P,next=N;} //tao 1 node
};
template <class T>   //bo lap nguoc
struct it_dlist
{
	node<T>*cur=0;
	it_dlist(node<T>*c=0) {cur=c;}
	T &operator*() {return cur->elem;}
	it_dlist<T> operator++(int)
	{
		cur=cur->next;
		return cur;
	}
	it_dlist<T> operator++()
	{
		node<T>*p=cur;
		cur=cur->next;
		return p;
	}
	bool operator!=(it_dlist<T> it)
	{
		return cur!=it.cur;
	}
	it_dlist<T> &operator=(it_dlist<T> it)
	{
		this->cur=it.cur;
		return *this;
	}
};
template <class T>   //bo lap xuoi
struct rit_dlist
{
	node<T>*cur=0;
	rit_dlist(node<T>*c=0) {cur=c;}
	T &operator*() {return cur->elem;}
	rit_dlist<T> operator++(int)
	{
		cur=cur->prev;
		return cur;
	}
	rit_dlist<T> operator++()
	{
		node<T>*p=cur;
		cur=cur->prev;
		return p;
	}
	bool operator!=(rit_dlist<T> it)
	{
		return cur!=it.cur;
	}
	rit_dlist<T> &operator=(rit_dlist<T> it)
	{
		this->cur=it.cur;
		return *this;
	}
};
template <class T>
struct dlist
{
	int n;
	node<T> *head,*trail;
	dlist() {n=0;head=trail=0;}// tao ds rong
	dlist(int k,T x=0) {n=0;head=trail=0; while(k--) push_front(x);}// tao ds k phan tu x
	~dlist() {while(n) pop_front();}
	int size() {return n;}
	bool empty() {return n==0;}
	T &front() {return head->elem;}
	T &back() {return trail->elem;}
	void push_front(T x)  //2 TH neu rong thi tao 1, neu khac rong them vao dau
	{
		if(n==0) head=trail=new node<T>(x);
		else
		{
			//node<T>*p=new node<T>(x,0,head); 
			//head=head->prev=p;
			head=new node<T>(x,0,head);
			head->next->prev=head;
		}
		n++;
	} 
	void push_back(T x)  //2 TH neu rong thi tao 1, neu khac rong them vao dau
	{
		if(n==0) return push_front(x);
		node<T>*p=new node<T>(x,trail,0); 
		trail=trail->next=p;
		n++;
	}
	void pop_front()
	{
		if(n==1) {delete head; head=trail=NULL;}
		else
		{
			node<T>*p=head;
			head=head->next;
			delete p;
			head->prev=0;
		}
		n--;
	} 
	void pop_back()
	{
		if(n==1) {delete head; head=trail=NULL;}
		else
		{
			node<T>*p=trail;
			trail=trail->prev;
			delete p;
			trail->next=0;
		}
		n--;
	} 
	void travel()  //ham duyet khi chua viet bo lap
	{
		for(node<T>*p=head;p;p=p->next) cout<<p->elem<<" ";
	}
	void sort(bool ok=true)
	{
		for(node<T>*p=head;p!=NULL;p=p->next) 
		for(node<T>*q=p->next;q!=NULL;q=q->next) 
		if(p->elem>q->elem==ok) swap(p->elem,q->elem);
	}
	typedef it_dlist<T> iterator;
	iterator begin() {return head;} 
	iterator end() {return NULL;} 	
	typedef rit_dlist<T> reverse_iterator;
	reverse_iterator rbegin() {return trail;} 
	reverse_iterator rend() {return NULL;} 
	void erase(iterator it)
	{
		if(it.cur==head) return pop_front();
		if(it.cur==trail) return pop_back();
		node<T>*p=it.cur->prev,*q=it.cur->next;
		delete it.cur;
		p->next=q;
		q->prev=p;
		n--;
	}
	void insert(iterator it,T x)
	{
		if(it.cur==head) return push_front(x);
		node<T>*p=it.cur->prev;
		p->next=new node<T>(x,p,it.cur);
		it.cur->prev=p->next;
		n++;	
	}
};
int main()
{
	dlist<int> L(5,-2);
	for(int x:{52,36,64,7,4567,346,15,23,4,235,32,5}) x%2?L.push_front(x):L.push_back(x);
	cout<<"\nL : "; L.travel();
	L.pop_back();	L.pop_back();
	L.pop_front();
	cout<<"\nL : "; L.travel();
	L.sort(0);
	cout<<"\nL : "; L.travel();
	
	cout<<"\nL bo lap  : "; for(dlist<int>::iterator it=L.begin();it!=L.end();it++) cout<<*it<<" ";
	cout<<"\nL auto : "; for(auto x:L) cout<<x<<" ";
	
	cout<<"\nL bo lap nguoc  : "; 
	for(dlist<int>::reverse_iterator itt=L.rbegin();itt!=L.rend();itt++) cout<<*itt<<" ";
	dlist<int>::iterator itt=L.begin(); itt++;itt++;
	L.erase(itt);
	cout<<"\nL auto : "; for(auto x:L) cout<<x<<" ";
	
	itt=L.begin(); itt++;itt++;itt++;itt++;
	L.insert(itt,100);
	cout<<"\nL auto : "; for(auto x:L) cout<<x<<" ";
	
}


