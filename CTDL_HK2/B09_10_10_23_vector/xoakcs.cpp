//Tichpx - 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string x;
	int k;
	cin>>x>>k;
	string V;//vector<char> V;
	for(char c:x)
	{
		while(V.size()>0 && V.back()<c &&k>0) {V.pop_back(); k--;}
		V.push_back(c);
	}
	while(k--) V.pop_back();
	//for(auto v:V) cout<<v;
	cout<<V;
}


