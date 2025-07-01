//Tichpx - cay heap
#include<bits/stdc++.h>
using namespace std;
#ifndef __pq__cpp__
#define __pq__cpp__
template <class T>
struct node
{
	T elem;    //du lieu
	int num;   //so phan tu nut nay quan ly
	node<T> *left,*right;
	node(T e,node<T>*L=0,node<T>*R=0)
	{
		elem=e;
		left=L;
		right=R;
		num=1+(L?L->num:0)+(R?R->num:0);
	}
};
template <class T,class K> 
void add(node<T>* &H, T x,K cmp)
{
	if(!H) H=new node<T>(x);
	else if(cmp(H->elem,x)) H=new node<T>(x,H,0);
	else if(!H->left) {H->num++; H->left=new node<T>(x);}
	else if(!H->right) {H->num++; H->right=new node<T>(x);}
	else {H->num++; add(H->left->num<H->right->num?H->left:H->right,x,cmp);}
}
template<class T>
void inorder(node<T> *H,string p="\n")
{
	if(H)
	{
		inorder(H->left,p+"\t");
		cout<<p<<H->elem;
		inorder(H->right,p+"\t");
	}
}
template <class T,class K>
void remove(node<T>*&H,K cmp)
{
	if(!H) return;
	if(H->num==1) {delete H; H=NULL;}
	else if(!H->left) {node<T> *p=H; H=H->right; delete p;}
	else if(!H->right) {node<T> *p=H; H=H->left; delete p;}
	else 
	{
		H->num--;
		if(cmp(H->left->elem,H->right->elem)) {H->elem=H->right->elem; remove(H->right,cmp);}
		else {H->elem=H->left->elem; remove(H->left,cmp);}
	}
}
template <class T,class K=less<T> >
struct PQ            //priority_queue
{
	K cmp;
	node<T> *root=0;
	PQ() {root=0;}
	int size() {return root?root->num:0;}
	bool empty() {return root==NULL;}
	T top() {return root->elem;}
	void push(T x) {add(root,x,cmp);}
	void pop() {remove(root,cmp);}
};
#endif
//int main()
//{
//	//PQ<int> Q;
//	PQ<int,greater<int> > Q;
//	for(int x:{234,643,2,423,5,12,66,5,635,837}) 
//	{
//		Q.push(x);
//	}
//	while(Q.size()){cout<<Q.top()<<" "; Q.pop();}
//}


//int main()
//{
//	node<int> *root=NULL;
//	for(int x:{4,63,6,54,7,6764,7,46,7,658,45}) add(root,x);
//	cout<<"\nCay heap: "; inorder(root); 
//	remove(root);
//	cout<<"\nCay heap: "; inorder(root); 
//	
//}


