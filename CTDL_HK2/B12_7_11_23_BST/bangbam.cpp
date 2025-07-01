//Tichpx - bang bam
#include<bits/stdc++.h>
using namespace std;

template <class T>
struct node
{
	T elem;
	node*next;
	node(T e,node *N=0) {elem=e;next=N;}	
};

template <class T>
struct Hash_Table
{
	node<T> **HT;
	int n,Cap;
	Hash_Table(int C=1234) 
	{
		Cap=C;
		HT=new node<T>*[C];
		n=0;
		for(int i=0;i<C;i++) HT[i]=NULL;
	}
	int hash_fun(T x)
	{
		hash<T> H;
		return H(x)%Cap;
	}
	void insert(T x)
	{
		int k=hash_fun(x);
		HT[k]=new node<T>(x,HT[k]);
		n++;
	}
	void erase(T x)
	{
		int k=hash_fun(x);
		node<T>*p=HT[k];
		if(!p) return;
		if(p->elem==x) {n--; HT[k]=p->next;delete p; return;	}
		while(p->next->elem!=x) p=p->next;
		if(p && p->next->elem==x)
		{
			n--;
			node<T>*q=p->next;
			p->next=q->next;
			delete q;
		}
	}
	void tralve()
	{
		for(int i=0;i<Cap;i++)
		for(node<T>*p=HT[i];p;p=p->next) cout<<p->elem<<" "; 
	}
	 
};

int main()
{
	Hash_Table<int> H(9);
	for(int x:{68,73,92,54,61,40,25}) H.insert(x);
	H.tralve();
	H.erase(61);
	H.erase(40);
	cout<<"\n";
	H.tralve();
}


