//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	B1:
		cout<<"nhap a,b = ";
		cin>>a>>b;
	B2:
		if(a!=b)
		{
			a>b?a-=b:b-=a;
			goto B2;
		}
	B3: cout<<a;
}


