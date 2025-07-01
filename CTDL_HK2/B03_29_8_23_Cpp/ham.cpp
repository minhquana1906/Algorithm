//Tichpx
#include<bits/stdc++.h>
using namespace std;
void center(string s,int w)
{
	string t=string((w-s.size())/2,' ');
	cout<<t+s+t;
}
struct sinhvien
{
	string ten;
	int tuoi;
	double diem;
};
istream  &operator>>(istream &is,sinhvien &s)  //cin>>s
{
	getline(is,s.ten);
	is>>s.tuoi>>s.diem;
	return is;	
}
int main()
{
	sinhvien s,t;
	ifstream fin("sv.txt");   //mo file C++11
	istringstream abc("nguyen van anh\n14\n3.6");
	abc>>s;
	cout<<setw(30)<<s.ten<<" "<<s.tuoi<<" "<<s.diem<<endl;
	fin>>s;
	cout<<setw(30)<<s.ten<<" "<<s.tuoi<<" "<<s.diem<<endl;
	fin.close();
	cout<<"\n\n|";
	center("lop minh",20);
	cout<<"|";
//	cout<<"rt ngoan";
}


