//Tichpx - sap xep co dieu kien
#include<bits/stdc++.h>
using namespace std;
struct cmp
{
	bool operator()(int a,int b)
	{
		if(a%3==b%3) return a>b;  //tu duy nguoc
		return a%3>b%3;
	}
};
int main()
{
	priority_queue<int,vector<int>,cmp> Q;
	int n,x;
	cin>>n;
	while(n--) {cin>>x; Q.push(x);}
	while(Q.size()) {cout<<Q.top()<<" "; Q.pop();}
}


