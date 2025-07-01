//Tichpx - chat nhi phan tren map
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	map<int,int> A; //giatri -> tan suat
	cin>>n;
	while(n--)
	{
		cin>>x;
		auto it=A.upper_bound(-x);
		if(it==A.end()) cout<<0<<"\n";
		else cout<<-(*it).first<<" "<<(*it).second<<"\n";
		A[-x]++;
	}
}


