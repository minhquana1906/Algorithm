//Tichpx - liet ke xau con
#include<bits/stdc++.h>
using namespace std;
set<string> S;
void lietke(string x)
{
	if(x=="" or S.find(x)!=S.end()) return;
	S.insert(x);
	lietke(x.substr(0,x.size()-1));
	lietke(x.substr(1,x.size()-1));
}
int main()
{
	string z;
	cin>>z;
	lietke(z);
	for(auto s:S) cout<<s<<"\n";
}


