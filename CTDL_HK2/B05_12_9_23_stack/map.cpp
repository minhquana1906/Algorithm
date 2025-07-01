//Tichpx - map
#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,string> M;
	M[29]="Ha Noi";
	M[17]="Thai Binh";
	M[90]="Ha Nam";
	M[-23]="khong ro";
	int x=213;
	if(M.find(x)==M.end()) cout<<x<<" khong co trong map";
	else cout<<M[x];
	cout<<M[17];
}


