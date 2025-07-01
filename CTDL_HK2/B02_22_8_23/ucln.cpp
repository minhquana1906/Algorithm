//Tichpx - ham mau
#include<bits/stdc++.h>
using namespace std;

template <typename T> 
T gcd(T a,T b)
{
	while(b)
	{
		T r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main()
{
	long long a=27LL,b=72LL;
	cout<<gcd<long long>(a,b);
}


