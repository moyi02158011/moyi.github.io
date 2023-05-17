#include<iostream>
using namespace std;
int main() 
{
	long long n;
	cin>>n;
	n=n%(1000*60*60*24);
	int h,m,s;
	h=n/(1000*60*60);
	m=n%(1000*60*60)/(1000*60);
	s=n%(1000*60*60)%(1000*60)/1000;
	printf("%02d:%02d:%02d",h,m,s); 
	return 0;
}
