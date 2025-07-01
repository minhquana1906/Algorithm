//Tichpx
#include<bits/stdc++.h>
#include"stack.cpp"
using namespace std;
int main()
{
	STACK<string> S;
	for(auto x:{"ha","noi","mua","khai","giang"}) S.push(x);
	STACK<string> Z;
	Z=S;
	Z.top()="truong";
	while(not Z.empty())
	{
		cout<<Z.top()<<" ";
		Z.pop();
	}
}

