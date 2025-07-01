//Tichpx - doi co so 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string hex="0123456789ABCDEF";
	//cout<<hex[10];
	stack<char> S;
	cin>>n;
	printf("\nn : = %X",n);
	cout<<"\nn = "<<setbase(16)<<n;
	cout<<"\nDoi : ";
	while(n) {S.push(hex[n%16]); n=n>>4;}
	while(S.size())
	{
		cout<<S.top();
		S.pop();
	}
}


