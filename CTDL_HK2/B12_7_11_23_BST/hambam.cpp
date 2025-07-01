//Tichpx - ham bam
#include<bits/stdc++.h>
using namespace std;
int main()
{
	hash<string> H;
	hash<unsigned long long> HH;
	cout<<H("hanoi");
	//unsigned long long x;
	unsigned __int64 x=H("hanoi");
	cout<<"\n"<<x;
	cout<<"\n"<<HH(HH(HH(x)));
	
}


