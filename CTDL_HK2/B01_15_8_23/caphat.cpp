//Tichpx  - cap phat bo nho dong
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int *a = new int;  //cap phat bo nho dong cho con tro a
	int *b;
	b= new int [10];  // cap phat bo nho dong cho mang b;
	*a=3;
	b[0]=b[1]=5;
	cout<<*a<<" "<<b[0]<<" "<<b[1];
	delete a;
	delete []b;
}


