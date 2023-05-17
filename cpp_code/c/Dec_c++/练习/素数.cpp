#include<iostream>
using namespace std;


bool is_prime(int x){
	for(int i=2;i<=x/i;i++)
	if(x%i==0)
	return false;
	return true; 
}


int main(){
	int count=0;
	int i;
	for(i=2;count<2019;i++)
	{
		for(int j=2;j<=i;j++)
		{
			if(i==j)
			count++;
			if(i%j==0)
			break;
		}
	}
	cout<<i-1<<endl;
	return 0;
}
