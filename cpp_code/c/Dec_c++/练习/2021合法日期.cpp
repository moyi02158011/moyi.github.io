#include<iostream>
using namespace std;

bool date_is_true(int m,int d){
	int monthDays[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(m>12||m<1)return false;
	if(d>monthDays[m])return false;
	return true;
}

int main(){
	int m,d;
	cin>>m>>d;
	if(date_is_true(m,d))
	cout<<"yes";
	else
	cout<<"no";
	return 0;
}
