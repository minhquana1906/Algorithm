//Tichpx
#include<bits/stdc++.h>
using namespace std;
void bp(int x,int *y)
{
	*y=x*x;
}
int main()
{
	int a;
	bp(3+5,&a);
	cout<<a;
}


