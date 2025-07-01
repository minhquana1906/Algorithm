//Tichpx - vi du
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> V;   //vector rong
	vector<int> A(3);  //vector A co 3 phan tu
	vector<int> B(5,1); //Vector B co 5 so 1
	int x[]={4,7,2,8,1,6,8,9,2};
	vector<int> C(x+1,x+5);  //7,2,8,1
	vector<int> D(C.begin(),C.end());  //D=C
	vector<int> E=D;
	cout<<"\nB: ";for(int i=0;i<B.size();i++) cout<<B[i]<<" ";
	cout<<"\nC: ";for(auto x:C) cout<<x<<" ";
	cout<<"\nD: ";for(vector<int>::iterator it=D.begin();it!=D.end();it++) cout<<*it<<" ";
	E.resize(10,3); 
	E.push_back(-2);
	cout<<"\nnguoc E: ";
	for(vector<int>::reverse_iterator it=E.rbegin();it!=E.rend();it++) cout<<*it<<" ";
	E.front()=E.back()=-3;
	cout<<"\nE : "; for(auto x:E) cout<<x<<" ";
	cout<<"\nE.size : "; cout<<E.size();
	cout<<"\nE.cap : "; cout<<E.capacity();
}


