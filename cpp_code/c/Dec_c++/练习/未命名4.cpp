#include <iostream>
#include <algorithm>
using namespace std;
int n;
void dfs(int x){
	if(x>n) {
		return;	
	}
	//xuan 
	cout << x << ' '; 
	dfs(x+1);
	
	//buxuan
	dfs(x+1);
}

int main (){
	cin  >> n ;
	dfs(1);
	return 0 ; 
}
