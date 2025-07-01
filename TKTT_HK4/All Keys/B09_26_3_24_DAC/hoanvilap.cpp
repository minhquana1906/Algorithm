//Tichpx
#include<bits/stdc++.h>
using namespace std;
map<char,int>F;
int n;
void TRY(string x)
{
	if(x.size()==n) cout<<x<<"\n";
	else
	for(auto &f:F)
	if(f.second>0)
	{
		f.second--;
		TRY(x+f.first);
		f.second++;
	}
}
int main()
{
	string x;
	cin>>x;
	n=x.size();
	for(auto c:x) F[c]++;  //dem tan suat
	TRY("");
}


