//Tichpx
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
	queue<int> Q;
	for(int x:{4,7,2,8}) Q.push(x);
	
	cout<<"\nFirst : "<<Q.front();
	cout<<"\nLast : "<<Q.back();
	cout<<"\nsize : "<<Q.size()<<"\n";
	
	Q.back()=10;
	Q.front()=6;
	
	while(not Q.empty()) {cout<<Q.front()<<" "; Q.pop();}
}


