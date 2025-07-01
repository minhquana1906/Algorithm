//Tichpx - BST
#include<bits/stdc++.h>
using namespace std;
template<class T>
struct node
{
	T elem;
	node*left,*right;
	node(T e,node<T>*L=0,node<T>*R=0) {elem=e;left=L,right=R;}
};
template <class T,class K>
void add(node<T>*&H,T x,K cmp)
{
	if(H==0) H=new node<T>(x);
	else if(H->elem==x) return;
	else add(cmp(x,H->elem)?H->left:H->right,x,cmp);
}
template<class T,class K>
node<T> *find(node<T>*H,T x,K cmp)
{
	if(!H or H->elem==x) return H;
	return find(cmp(x,H->elem)?H->left:H->right,x,cmp);
}

template<class T>
T Max(node<T>*H)
{
	//return H->right?Max(H->right):H->elem;
	while(H->right) H=H->right; return H->elem;
}
template <class T,class K>
void remove(node<T>*&H,T x,K cmp)
{
	if(!H) return;
	if(H->elem==x) 
	{
		node<T>*p=H;
		if(!H->left) {H=H->right; delete p;}
		else if(!H->right) {H=H->left; delete p;}
		else {H->elem=Max(H->left); remove(H->left,H->elem);}
	}
	else remove(cmp(x<H->elem)?H->left:H->right,x);
}

template <class T>
void PRINT(node<T>*H,string p="\n")  //dung tam khi chua co bo lap
{
	if(!H) return;
	PRINT(H->left,p+"\t");
	cout<<p<<H->elem;
	PRINT(H->right,p+"\t");
}
template <class T>
void inorder(node<T>*H,list<T>&L)
{
	if(H) {inorder(H->left,L); L.push_back(H->elem); inorder(H->right,L);}
}
template <class T,class K=less<T> >
struct SET
{
	node<T> *root=0;
	int n;
	K cmp;
	SET() {root=0;n=0;}
	int size() {return n;}
	bool empty() {return n==0;}
	void insert(T x) {if(!find(root,x,cmp)) {n++;add(root,x,cmp);}}
	void erase(T x) {if(find(root,x,cmp)) {n--;remove(root,x,cmp);}}
	list<T> L;
	typedef typename list<T>::iterator iterator;
	iterator begin() {L.clear(); inorder(root,L); return L.begin();}
	iterator end() {return L.end();}
};

int main()
{
//	node<int>*root=0;
//	for(int x:{54,356,23,64,23,3,54,61,2,54,326,423}) add(root,x);
//	PRINT(root);
	SET<int,greater <int> > S;
	for(int x:{542,54,356,23,64,23,3,54,61,2,54,326,423}) S.insert(x);
	for(auto s:S) cout<<s<<" ";
}


