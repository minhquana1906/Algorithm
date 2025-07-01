//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//priority_queue<int> Q;
	priority_queue<int,vector<int>,greater<int>> Q;
	for(int x:{4,7,2,8,4,8,3,2}) Q.push(x);
	while(Q.size())
	{
		cout<<Q.top()<<" ";
		Q.pop();
	}
}


