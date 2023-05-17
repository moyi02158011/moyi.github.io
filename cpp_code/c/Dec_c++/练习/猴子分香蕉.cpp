#include<iostream>
using namespace std;

bool is_right(int n){
	if(n%5!=1||n==0)
	return false;
	n=n/5*4;
	if(n%5!=2||n==0)
	return false;
	n=n/5*4;
	if(n%5!=3||n==0)
	return false;
	n=n/5*4;
	if(n%5!=4||n==0)
	return false;
	n=n/5*4;
	if(n%5!=0||n==0)
	return false;
	return true;
}

int main(){
	int i=1;
	for(i=1;;i++)
	{
		if(is_right(i))
		break;
	}
	cout << i << endl;
	return 0;
}
