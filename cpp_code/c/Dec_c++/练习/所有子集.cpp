#include<iostream>
using namespace std;

int main(){
	int n ;
	cin>> n ;
	
	for(int i = 0; i<(1<<n);i++){//从0开始枚举，每个数代表一个子集 
		for(int j=0;j<n;j++)//输出当前子集，每一位&1为真，及这一位为1输出j； 
		if(i&(1<<j)) cout << j+1 <<' ';
		cout << endl;
	}
} 
