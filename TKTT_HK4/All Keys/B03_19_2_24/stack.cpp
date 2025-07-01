//Tichpx
#include<bits/stdc++.h>
#include<stack>
#include<set>
using namespace std;
int main()
{
	stack<long> S;
	for(int x:{4,7,2,8}) S.push(x);
	cout<<"\ntop "<<S.top();
	cout<<"\nsize "<<S.size();
	S.top()=9;
	cout<<"\n";
	while(S.size()>0) {cout<<S.top()<<" "; S.pop();}
}


