#include <iostream>
#include <algorithm>
#include <cstring>

#define ll long long

using namespace std;

const int N = 110;
ll n,dp[N][N];
ll a[N][N];

int main(){
	cin >> n;
	for(int i = 1;i <= n ; i ++ )
		for(int j = 1; j <= i ; j++ ){
			scanf("%d",&a[i][j]);
		}
	for(int i = 1;i <= n ; i ++ )
		for(int j = 1; j <= i ; j++ ){
			dp[i][j]=max(dp[i-1][j-1],dp[i-1][j])+a[i][j];
		}
	ll ans =dp[n][1];
	for(int i = 2;i <= n; i++ ){
		ans = max(ans,dp[n][i]);
	}
	cout << ans << '\n';
	return 0;
}
