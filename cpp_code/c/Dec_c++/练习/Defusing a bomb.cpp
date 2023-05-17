#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if (b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main12(){
	int n,k;
	cin>>n>>k;
	int a,count=0;
	for (int i=1;i<=n;i++)
	{
		cin >> a;
		if (a==k||gcd(a,k)==k)
		count++;
	 } 
	cout << count ;
	return 0;
}
