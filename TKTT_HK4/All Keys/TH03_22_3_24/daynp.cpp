//Tichpx
#include<bits/stdc++.h>
using namespace std;
void TRY(string x,int n)
{
	if(x.size()==n) {cout<<x<<"\n"; return;}
	TRY(x+"0",n);
	if(x.size()<2 or not(x.back()=='0' && x[x.size()-2]=='1')) TRY(x+"1",n);
}
int main()
{
	int n;
	cin>>n;
	TRY("",n);
}


