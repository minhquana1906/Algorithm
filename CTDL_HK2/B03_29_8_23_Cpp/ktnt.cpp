//Tichpx
#include<bits/stdc++.h>
using namespace std;
bool ktnt(long long n)
{
	if(n==2) return 1;
	if(n<2 or n%2==0) return 0;
	for(long long i=3;i*i<=n;i+=2) if(n%i==0) return 0;
	return 1; 
}
int main()
{
	long long m=1e9+7;
	cout<<(ktnt(m)?"nguyen to":"khong nguyen to");

}


