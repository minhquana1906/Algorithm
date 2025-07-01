//Tichpx
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int elem;
	vector<node*> child;
	node(int n)
	{
		elem=n;
		for(int a=1;a*a<=n;a++)
		if(n%a==0) child.push_back(new node((a-1)*(n/a+1)));
	}	
};
void pre_order(node *H)
{
	if(!H) return;
	cout<<H->elem<<" ";
	for(auto c:H->child) pre_order(c);
}
void post_order(node *H)
{
	if(!H) return;
	for(auto c:H->child) post_order(c);
	cout<<H->elem<<" ";
}
void in_order(node *H)
{
	if(!H) return;
	if(H->child.size()>0) in_order(H->child[0]);
	cout<<H->elem<<" ";
	if(H->child.size()>0) for(int i=1;i<H->child.size();i++) in_order(H->child[i]);
}
int hight(node *H)
{
	if(!H) return 0;
	if(H->child.size()==0) return 1;
	int h=0;
	for(auto c:H->child) h=max(h,hight(c));
	return h+1;
}
int sum(node *H)
{
	if(!H) return 0;
	int s=0;
	for(auto c:H->child) s+=sum(c);
	return s+H->elem;
}
void maxchild(node *H,int &res)
{
	for(auto c:H->child) maxchild(c,res);
	res=max(res,int(H->child.size()));
}
int main()
{
	int n=28;
	node *root=new node(n);
	cout<<"\nPre : ";	pre_order(root);
	cout<<"\nIn  : ";	in_order(root);
	cout<<"\npost: ";	post_order(root);
	cout<<"\nChieu cao : "<<hight(root);
	cout<<"\nTong      : "<<sum(root);
	int res=0;
	maxchild(root,res);
	cout<<"\nCon dong nhat "<<res;
}


