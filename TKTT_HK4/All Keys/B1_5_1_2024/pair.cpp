//Tichpx
#include<bits/stdc++.h>
using namespace std;
typedef pair<double,double> Diem;
int main()
{
	Diem A(3,4),B=A,C,D;
	cout<<A.first<<" "<<A.second<<"\n";
	cout<<B.first<<" "<<B.second<<"\n";
	B=make_pair(5,6);
	cout<<B.first<<" "<<B.second<<"\n";
	C={7,8};
	cout<<C.first<<" "<<C.second<<"\n";
	D=Diem(0,0);  
	cout<<D.first<<" "<<D.second<<"\n";
}


