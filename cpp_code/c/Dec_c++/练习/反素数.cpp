#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef long long ll;

ll prime[10]={2,3,5,7,11,13,17,19,23,29};

ll ans ; 
ll n ;
void dfs (ll x){
	
	if (x * 2 >= n){
		ans = x;
		return ;
	} 
	
	for (int j = 0 ; j < 10 ; j++ ){
		x *= prime[j];
		if (x > n) {
			x /= prime[j];
			break;
		}
	}
	dfs ( x );
	return ;
}

int main () {
	cin >> n ; 
	dfs (1);	
	cout << ans ;
	return 0;
}
