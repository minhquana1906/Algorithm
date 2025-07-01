//Tichpx
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
	stack<int> S;
	for(int x:{3,7,2,1,4,7,2,8}) S.push(x); //push-day vao
	S.top()=9;
	while(S.size()) //while(! S.empty())
	{
		cout<<S.top()<<" ";  //top - xem dinh ma khong lay ra
		S.pop();   //pop - lay ra
	}
}


