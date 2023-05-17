#include<iostream>

using namespace std;
int main()
{
	int sum=0;
	for (long long i=1;i<=1200000;i++)
		if(1200000%i==0)
		sum++;
	cout << sum<<endl;
	
	return 0;
 } 
