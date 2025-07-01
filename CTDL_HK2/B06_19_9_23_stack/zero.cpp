//Tichpx - DFS cho bai moi con duong ve 0
#include<bits/stdc++.h>
using namespace std;
bool DFS(int s,int f)
{
	int d[s+5]={};  //toan 0
	stack<int> S;
	d[s]=1;
	S.push(s);
	while(S.size())
	{
		int u=S.top(); S.pop();
		for(int a=1;a*a<=u;a++)
		if(u%a==0)
		{
			int v=(a-1)*(u/a+1);
			if(d[v]==0 && v>=f) 
			{
				d[v]=1;
				S.push(v);
				if(v==f) return true;
			}
		}
	}
	return false;
}
int main()
{
	int s=30,f=10;
	if(DFS(s,f)) cout<<"Di duoc";
	else cout<<"khong di duoc";
}


