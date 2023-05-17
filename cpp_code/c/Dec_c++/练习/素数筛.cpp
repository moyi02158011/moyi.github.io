#include <iostream>
#include <algorithm>
#include <cstring>
using  namespace std ;

const int MAX_N = 100010;
bool st[MAX_N];

void geisum (int n){
	for (int i = 2;i<=MAX_N;i++){
		st[i] = true;
	}
	for (int i = 2;i<=n ;i++){
		if(!st[i]) continue ; 
		for (int j = 2 ; j * i <= n  ; j++ ){
			st[i*j] = false;
		}
	}
}

int n ;
int a[MAX_N];
int ans[MAX_N];
int main (){
	cin >> n ; 
	
	geisum(MAX_N);
	int cnt = 0;
	for (int i = 0 ; i < n ;i++){
		scanf("%d",&a[i]);
		if(st[a[i]]) ans[cnt++] = a[i]; 
	}
	for (int i = 0 ; i < cnt ; i++){
		printf ("%d",ans[i]);
		if (i!= cnt-1) printf (" ");
	}
	
	return 0;
}
