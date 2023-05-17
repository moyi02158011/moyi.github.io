#include<iostream>
using namespace std;
int main1128()
{
	char c;int x;
	cin>>c>>x;
	int a=1189,b=841;
	while(x--)
	{
		a/=2;
		if(a<b)swap(a,b);
	}
	cout << a << endl;
	cout << b << endl;
	return 0;
 } 
