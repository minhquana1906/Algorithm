//Tichpx - nhan 2 so lon
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string x,y;
	vector<int> A,B,C;
	cin>>x;	reverse(x.begin(),x.end()); for(char c:x) A.push_back(c-'0');
	cin>>x;	reverse(x.begin(),x.end()); for(char c:x) B.push_back(c-'0');
	C.resize(A.size()+B.size()-1,0);
	for(int i=0;i<A.size();i++)
	for(int j=0;j<B.size();j++) C[i+j]+=A[i]*B[j];
	long long M=0;
	for(auto &c:C) {M+=c;c=M%10; M/=10;}
	for(;M>0;M/=10) C.push_back(M%10);
	for(auto it=C.rbegin();it!=C.rend();it++) cout<<*it;
}


