//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()  //1
{
	int n;   //1
	double M_E=exp(1),M_PI=acos(-1);
	cin>>n;  //1
	int s=1; //2
	for(int i=1;i<=n;i*=M_E) s*=i; //2+3logn+1
	cout<<s;  //11
	//T(n) = 3logn+9  = O(logn)
}


