#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std ;

const int MAX_N = 1010 ; 

int v[MAX_N];
int w[MAX_N];

int n , m ;
int dp[MAX_N][MAX_N];
int main (){
	cin >> n  >> m ; 
	for(int i = 0; i < n; i++)
		cin >> v[i] >> w[i] ;
		
	//dp[n]...=0
	for (int i = n-1 ; i >= 0; i--){
		for (int j = 0 ; j <= m ; j++){	
			int p1 = dp[i+1][j];
			int p2 = 0;
			if(j >= v[i])
			p2 = w[i] + dp[i+1][j-v[i]];
			dp[i][j] = max(p1,p2);
		}
	}
	cout << dp[0][m]; 		
	return 0 ; 
}
