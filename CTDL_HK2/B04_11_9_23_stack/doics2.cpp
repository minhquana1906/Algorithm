//Tichpx - doi co so 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	stack<int> S;
	cin>>n;
	while(n) {S.push(n%2); n=n>>1;}
	while(S.size())
	{
		cout<<S.top();
		S.pop();
	}
}


