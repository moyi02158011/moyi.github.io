#include <iostream>

using namespace std;
typedef long long ll;

const int N = 1e6 + 10, mod =998244353;

int n, p;

int a[N], cnt; 

ll sum[N];
int get_sum(ll n){  
	
	for(ll i = 0; i < (1 << n );i++)
	{
		for(ll j = 0;j < n;j++) 
		if(i&(1<<j))  sum[i] = (sum[i] + a[j]) % mod;
	}

}

ll fastPow(ll a, ll n){
	ll ans = 1;
	while (n){
		if(n&1) ans = (ans * a) % mod; 
		a = (a * a) % mod;
		n >>= 1;
	}
	return ans ;
}

int main (){ 
	cin >> n >> p ;
	
	int t = 1 ,cnt = 1;
	
	for(int i = 0 ; i < 2 ; i++){
		scanf("%d", &a[i]);
	}
	get_sum(n);
	
	ll ans = 0;
	for(int i = 0 ; i < (1 << n ) ;i ++)
	{
		ans = (ans + fastPow ( p, sum[i]) ) % mod ;
	}
	
	cout << ans ;
	return 0 ;
}
