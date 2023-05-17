#include <iostream>
using namespace std;

int main1126(void)
{
	long long  a,b,n,d=0;
	cin>>a>>b>>n;
	long long s;
	s=5*a+2*b;
	d+=n/s*7;
	n%=s;
	
	for(int i=1;i<=7;i++)
	{
		if(n<=0)
		break;
		if(i<=5)
		n-=a;
		else
		n-=b;
		d++;
	}
	cout<< d<<endl;
	return 0;
}

