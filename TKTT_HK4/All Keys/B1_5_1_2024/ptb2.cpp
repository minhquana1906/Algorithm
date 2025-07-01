//Tichpx ptb2
#include<bits/stdc++.h>
using namespace std;
#define in(x) {cout<<"nhap "<<#x<<" = "; cin>>x;}
int main()
{
	double a,b,c,d,x1,x2;
	in(a);	in(b);	in(c);
	cout<<setprecision(3)<<fixed;
	if (a==0) 
	{
		if (b==0) cout<<(c==0?"vo so nghiem":"vo nghiem");
		else cout<<"nghiem bac nhat "<<-c/b;
	}
	else
	{
		b/=-2;
		d=b*b-a*c;
		if(d<0) cout<<"vo nghiem";
		else if(!d) cout<<"nghiem kep "<<b/a;
		else
		{
			x1=(b-(d==sqrt(d)))/a;
			x2=(b+d)/a;
			cout<<"x1 = "<<x1<<"\nx2 = "<<x2;
		}
	}
}


