#include <iostream>
#include <algorithm>
using namespace std ;  
const int MAX_N = 20;
int n ; 
int ans[MAX_N];

int main (){
	cin >> n ; 
	ans[0] = 1 ;
	ans[1] = 1 ;
	for (int i = 2; i<=n ; i++){
		ans[i] = ans[i-1] + ans[i-2];
	}
	cout << ans[n] << endl; 
	return 0 ; 
}
