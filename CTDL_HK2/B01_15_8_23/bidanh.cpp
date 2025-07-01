//Tichpx - bi danh
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x=123;
	int &y=x;    //bien y la bi danh cua bien x
	cout<<"\nDia chi x "<<&x;
	cout<<"\nDia chi y "<<&y;
	y++;
	cout<<"\n"<<x;
}


