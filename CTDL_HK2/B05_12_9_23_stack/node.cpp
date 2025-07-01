//Tichpx - cai dat stack bang danh sach lien ket don
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int elem;
	node *next;
	node(int e,node *N=NULL) {elem=e; next=N;}  //ham trao 1 node
};
int main()
{
	node M(342,NULL),K(213,&M),*D=new node(376,&K),C(156,D);
	//C->*D->K->M;
	for(node *p=&C; p!=NULL;p=p->next) cout<<p->elem<<" ";

}

//struct person  //cau truc tu tro
//{
//	string ten;
//	int tuoi;
//	person *bo,*me;
//};


