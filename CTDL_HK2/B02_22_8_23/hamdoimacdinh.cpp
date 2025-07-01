//Tichpx - ham co doi mac dinh
#include<bits/stdc++.h>
using namespace std;

int tong(int a=2,int b=3);   //default

int main()
{
	cout<<tong(4,5)<<"\n";   //9
	cout<<tong(6)<<"\n";     //9
	cout<<tong()<<"\n";      //5
}
int tong(int a,int b)  //default
{
	return a+b;
}

