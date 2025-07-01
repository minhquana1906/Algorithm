//Tichpx
#include<bits/stdc++.h>
using namespace std;
void bp(int x,int &y)
{
	y=x*x;
}
int main()
{
	int a;
	bp(3+5,a);
	bp(a+1,a);
	cout<<a;  //4225
}


