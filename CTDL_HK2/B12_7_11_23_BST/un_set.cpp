//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_set<int> S;
	//multiset<int> S;
	for(int x:{542,54,356,23,64,23,3,54,61,2,54,326,423}) S.insert(x);
	for(auto s:S) cout<<s<<" ";
	
	cout<<"\nSau khi xoa 23\n";	
	S.erase(23);
	for(auto s:S) cout<<s<<" ";
	
	auto it=S.find(54);
	if(it!=S.end()) S.erase(it);
	cout<<"\nSau khi xoa 54\n";	
	for(auto s:S) cout<<s<<" ";
	
}


