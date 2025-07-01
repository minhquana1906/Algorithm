//Tichpx
#include<bits/stdc++.h>
using namespace std;

long long fibo(int n)   //1+1  = 2
{
	long long s[n+5]={0,1};   //1(khai bao)  + 1(+) + 2 (s[0]=0)+2 (s[1]=1) = 6
	int i=2;				  //2 gom khai bao va gan
	for(;i<=n;)				  // lap n-1 lan moi lan: (1+ 7 +1)
	{
		s[i]=s[i-1]+s[i-2];   //7
		i++;                  //1
	}                         //=> (n-1)*9 +1(ra khoi vong lap)
	return s[n];	          //2
}
//do phuc tap khong gian K(n) = sizeof(n) + sizeof(s)+sizeof(i) =4+(n+5)*8+4 = 8n+48=O(n)
//do phuc tap thoi gian
// T(n) = 2+6+2+9(n-1)+1 +2 = 9n+4 = O(n)
int main()  //9n+8
{
	int n;   		//1
	cin>>n; 		//1
	cout<<fibo(n);	//1+ 9n+4
	//dung fast io chay cin cout nhanh nhu scanf va print 
}


