//Tichpx - truy van max
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int elem,L,R;   //elem = max (a[L]...a[R-1]
	node *left,*right;
	node(int a,int b)
	{
		elem=INT_MIN;		L=a;		R=b;
		if(a+1==b) left=right=NULL;
		else {left=new node(a,(a+b)/2); right=new node((a+b)/2,b);}
	}
};
void update(node *H,int k,int x)
{
	H->elem=max(H->elem,x);
	if(H->L+1<H->R) update(k<H->left->R?H->left:H->right,k,x); 
}
int get(node *H,int u,int v)
{
	if(H->L==u && H->R==v) return H->elem;
	if(H->left->R>=v) return get(H->left,u,v);
	if(H->right->L<=u) return get(H->right,u,v);
	return max(get(H->left,u,H->left->R),get(H->right,H->right->L,v));
}
int main()
{
	int n,a,m,u,v;
	cin>>n;
	node*root=new node(1,n+1);
	for(int i=1;i<=n;i++) {cin>>a; update(root,i,a);}
	cin>>m;
	while(m--) {cin>>u>>v; cout<<get(root,u,v+1)<<"\n";}

}

