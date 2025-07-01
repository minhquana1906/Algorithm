//Tichpx sang Eratosthene
#include<bits/stdc++.h>
using namespace std;

vector<int> sang(int n)
{
	vector<int> P;
	bool S[n+5]={}; //mot mang toan  false
	fill(S+2,S+n+1,true);  //memset
	for(int i=2;i<=n;i++)
	if(S[i])
	{
		P.push_back(i);
		for(int j=i*i;j<=n;j+=i) S[j]=0;
	}
	return P;
}
int main()
{
	vector<int> P=sang(100);
	for(auto p:P) cout<<p<<" ";
}


