#include <iostream>
#include <algorithm>
#include <cstring>
using  namespace std ;

const int MAX_N = 100010;
bool st[MAX_N];

int prime[MAX_N],cnt;

void geisum (int n){
	for (int i = 2;i<=MAX_N;i++){
		st[i] = true;
	}
	
	for (int i = 2;i<=n ;i++){
		if(!st[i]) continue ; 
		prime[cnt++] = i;
		for (int j = i+i ; j <= n  ; j+= i ){
			st[j] = false;
		}
	}
}
int main (){
	int n ;
	cin >> n ; 
	
	geisum(n);
	for (int i = 0 ; i < cnt ; i++){
		printf ("%d",prime[i]);
		if(i!=cnt-1) printf(" ");
	}
	cout << endl ; 
	return 0;
}
