#include <iostream>
#include<algorithm>
using namespace std ;

const int N = 30;

int n ;

int ma[10] = {6,2,5,3,4,5,6,3,7,6};

int ans; 

void dfs(int x,int y){
	
	if(ma[x]+ma[y]+ma[x+y]==n){
		ans ++;
	}
	if(x==9&&y==9) return ;
	for (int i = x; i<=9;i++){
		for(int j = y ; j<=0 ; j++){
			dfs(x,y);
		}
	}
	return ;
}

int main (){
	cin >> n ;
	dfs(0,0);
	cout << ans ;
	return 0;
}
