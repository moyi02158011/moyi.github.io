#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;


//������ 
ll fastPow(ll a, ll n){
	ll ans = 1;
	while (n){
		if(n&1) ans *= a; 
		a *= a;
		n >>= 1;
	}
	return ans ;
}

//�� a^n%k  (a*b)%k == (a%k)*(b%k)%k;
ll fastPowMod(ll a,ll n,ll mod){
	ll ans = 1;
	a %= mod;  //��ֹԽ��
	while (n){
		if (n & 1)  ans = (ans * a) % mod ; //һ����ֹԽ��
		a = a * a % mod ;
		n >> 1; 
	} 
	return ans;
} 
