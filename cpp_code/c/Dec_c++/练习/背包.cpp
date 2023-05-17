#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
const int N = 1010;

int n , m;
int v[N];
int w[N];
int dp[N][N];


int main (){
	cin >> n >> m;
	for(int i = 1 ; i <= n; i++)
		cin >> v[i] >> w[i] ;
	
	for (int i = 1; i <= n ; i++){
		for (int j =1 ; j<=m ; j++){
			if (j < v[i]) dp[i][j] = dp[i-1][j];
			else dp[i][j] = max (w[i] + dp[i-1][j-v[i]] , dp[i-1][j]);
		}
	}
	
	cout << dp[n][m];
	return 0;
}
 
