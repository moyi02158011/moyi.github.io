#include <bits/stdc++.h>

#define ll long long 
#define int ll

using namespace std;

const int N = 2e3 + 30;
int t,k;
int f[N][N];
int a[N][N];   //¶þÎ¬Ç°×ººÍ

void init(int n){
	for(int i = 0; i <= n; i ++ ){
		for(int j = 0; j <= i; j ++ ){
			if(!j) f[i][j] = 1;
			else f[i][j] = (f[i - 1][j] + f[i - 1][j - 1]) % k;
			
			if(f[i][j] == 0) a[i][j] ++ ;
		}
	}
	
	for(int i = 1; i <= n; i ++ ) {
		for(int j = 1; j <= n; j ++ ) {
			a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
		}
	}
}

void solve(){
	int ans = 0;
	int n,m;scanf("%lld%lld",&n,&m);
	
	int t1,t2;
	if(m < n){
		t1 = a[n][n] - a[0][n] - a[n][0] + a[0][0];
		t2 = a[n][n] - a[m][n] - a[n][m] + a[m][m];
		cout << t1 - t2 << endl;
	}
	else{
		t1 = a[n][n] - a[0][n] - a[n][0] + a[0][0];
		cout << t1 << endl;
	}
}


signed main()
{
	cin >> t >> k;
	init(2010);
	while(t -- ) solve();
	return 0;
}
