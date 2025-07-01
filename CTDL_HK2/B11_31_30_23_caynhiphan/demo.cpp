//Tichpx
#include<bits/stdc++.h>
#include"pq.cpp"
using namespace std;
int main()
{
	PQ<string,greater<string> > Q;
	string A[]={"ha","noi","mua","nay","vang","nhung","con","mua"};
	for(string x:A) Q.push(x);
	while(Q.size())
	{
		cout<<Q.top()<<" ";
		Q.pop();
	}
}


