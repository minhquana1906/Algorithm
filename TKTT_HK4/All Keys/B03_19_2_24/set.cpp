//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//set<int,greater<int> > S;
	//multiset<int,less<int> > S;
	unordered_multiset<int> S;
	for(int x:{4,7,2,8,4,8,3,2}) S.insert(x);
	
	for(int x:S) cout<<x<<" ";
	cout<<"\n";
	auto it=S.find(4);
	if(it!=S.end())	S.erase(it);
	for(int x:S) cout<<x<<" ";
}


