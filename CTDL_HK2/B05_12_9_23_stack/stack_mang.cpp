//Tichpx - cai dat stack bang mang -version 1
#include<bits/stdc++.h>
using namespace std;
#define MAX_VOL 1000
template <class T>
struct STACK
{
	int n;   //so phan tu dang co
	T buf[MAX_VOL];
	STACK() {n=0;}
	void push(T x) {buf[n++]=x;}
	void pop() {n--;}
	T &top() {return buf[n-1];}
	int size(){return n;}
	bool empty(){return n==0;}
};
int main()
{
	STACK<string> S;
	for(auto x:{"ha","noi","mua","khai","giang"}) S.push(x);
	S.top()="truong";
	while(not S.empty())
	{
		cout<<S.top()<<" ";
		S.pop();
	}
}


