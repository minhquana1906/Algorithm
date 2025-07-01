//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int> Q;
	for(int x:{352,54,3,236,234,5,235,234}) Q.push(x);
	while(Q.size())
	{
		cout<<Q.top()<<" ";
		Q.pop();
	}
}


