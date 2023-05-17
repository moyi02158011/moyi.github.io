#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
const int MAX_N = 5010;
char sum[MAX_N][MAX_N] ; 


void fib(int n){
	sum[0][1] = 1;
	sum[1][1] = 1;
	
	int jinwei = 0 ;
	for (int i = 2 ;  i <= n ; i ++){
		for (int j = 1 ; j < MAX_N ; j ++){
		sum[i][j] = (sum[i-1][j] + sum[i-2][j] + jinwei)%10;
		jinwei = (sum[i-1][j] + sum[i-2][j] + jinwei)/10;
		}
	}
	return ;
}


long long n ; 
int main (){
	 
	cin >> n ; 
	if(n >= 2)
	fib(n);
	int len = 0 ; 
	for (int i = MAX_N; i>0 ; i-- ){
		if (sum[n][i]!=0){
			len = i;
			break;
		}
	}
	
	for (int i = len ; i > 0 ; i--){
		printf ("%d",sum[n][i]);
	}
	return 0;
}
