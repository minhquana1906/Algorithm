//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<int> Q;
	for(int x:{4,7,2,8,9}) Q.push(x);
	cout<<Q.front()<<"\n";
	cout<<Q.back()<<"\n";
	cout<<Q.size()<<"\n";
	Q.front()=5;
	while(Q.size())
	{
		cout<<Q.front()<<" ";
		Q.pop();
	}
}


