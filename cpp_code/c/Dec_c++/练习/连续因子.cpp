#include <iostream>
#include <algorithm>

using namespace std;
long long  n ;

int main(){
	cin >> n ; 
	int ans = 0;
	
	for (int i = 1 ; i <= n  ; i++){
		int sum = 1;
		for (int j = i ; j < n ; j++){
			sum *= j ;
			if(sum == n ) {
				cout << j  << endl;
				cout << sum << endl;
				ans = j - i +1 ;
				break;
			}
			if(sum > n) break ;
		}
		if(ans) break ;
	}
	
	cout << ans << endl;
	return 0;
}

