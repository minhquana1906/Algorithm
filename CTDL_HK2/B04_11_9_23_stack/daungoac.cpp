//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<char> S;
	string s;
	cin>>s;
	for(char x:s)
	if(x=='(' or x=='[' or x=='{') S.push(x);
	else if (x==')') {if(S.top()!='(') break; else S.pop();}
	else if (x==']') {if(S.top()!='[') break; else S.pop();}
	else if (x=='}') {if(S.top()!='{') break; else S.pop();}
	cout<<(S.empty()?"hop le":"khong hop le");
}


