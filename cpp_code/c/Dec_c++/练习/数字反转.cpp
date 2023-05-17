#include<iostream>
#include<math.h>
using namespace std;

long long  digit(long long x)
{
	int count=0;
	while (x>0)
	{
		count ++;
		x/=10;
	}
	return count ;
 } 
 long long change ( long long n)
 {
 	long long cg=0;
 	if(n>0)
 	{
 		int i = digit (n);
 		while (--i>=1)
 		{
 			cg+=n%10*pow(10,i);
 			n/=10;
		 }
		 cg+=n;
	 }
	 
	 else  if(n<0)
	 {
	 	n*=-1;
 		int i = digit (n);
 		while (--i>=1)
 		{
 			cg+=n%10*pow(10,i);
 			n/=10;
		 }
		 cg+=n;
		 cg*=-1;
	 }
	 else 
	 cg=0;
 	return cg;
 }
 int main()
 {
 	int n;
 	cin>> n;
 	cout<<change(n)<<endl;
 	return 0;
 }
