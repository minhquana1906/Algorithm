//Tichpx - khoi luong hoa chat
#include<bits/stdc++.h>
#include"stack.cpp"
using namespace std;
int main()
{
	STACK<int> S;
	map<char,int> K={{'C',12},{'H',1},{'O',16},{'(',0}};
	string x;
	cin>>x;
	for(char c:x) 
	if(c=='C' or c=='H' or c=='O' or c=='(') S.push(K[c]);
	else if (c==')')
	{
		int t=0;
		while(S.top()!=0) {t+=S.top(); S.pop();}
		S.top()=t;   //dang la 0 chuyen sang t
	}
	else S.top()*=c-'0';
	int t=0;
	while(S.size()) {t+=S.top(); S.pop();}
	cout<<t;
}


