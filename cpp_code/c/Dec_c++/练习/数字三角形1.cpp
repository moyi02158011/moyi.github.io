#include <iostream>
#include <algorithm>

using namespace std;
const int N = 110 ; 

int dp [N][N];
int n;
int main (){
	cin >> n ;
	for (int i = 1 ; i <= n ; i++){
		for (int j = 1 ; j <= i ; j++){
			scanf("%d",&dp[i][j]);
			dp[i][j] += max(dp[i-1][j],dp[i-1][j-1]);
		}
	}
	
	if(n%2==0)  cout << max(dp[n][n/2],dp[n][n/2+1]) ;
	else cout << dp[n][n/2+1];
	
	return 0 ;
}
