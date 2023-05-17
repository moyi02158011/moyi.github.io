#include<iostream>
using namespace std;

bool is_right(int i){
	while(i){
		if(i%10==2||i%10==0||i%10==1||i%10==9||i==2||i==0||i==1||i==9)
		return true;
		i/=10;
	}
	return false;
}

int main(){
	int n;
	cin>>n;
	int sum=0;
	for (int i=1;i<=n;i++)
	{
		if(is_right(i))sum+=i;
	}
	cout << sum << endl;
	return 0;
}
