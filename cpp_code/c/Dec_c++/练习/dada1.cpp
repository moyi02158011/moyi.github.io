#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

const int N = 1010 ,mod = 998244353;

int prime[N],cnt,st[N];
int sum[N];//n的约数和；

void is_prime(int n ){
    for (int i = 2 ; i <= n ; i++){
        if(!st[i]) prime[cnt++] = i;
        for (int j = 0 ; prime[j]<=n/i;j++){
            st[prime[j]*i] = true;
            if(i%prime[j]==0) break;
        }
    }
}


void get_sum(int n){
    for(int i = 1 ; i <= n ; i++)
    {
        if(!st[i]||i==1) sum[i] = 0;
        else 
        {
            for(int j = 1 ; j < i ; j ++)
            if(i%j == 0) sum[i] += j ; 
        }
    }
}

int f[N];

int main (){
    int s ; cin >> s ;
    is_prime(s);
  
    get_sum(s);
    
    for(int i = 1; i <= s ;i ++)
        for(int j = s ; j >= i ; j--)
            f[j] =  max ( f[j] , f[j-i] + sum[i] ) % mod;
    
    cout << f[s]%mod ;
    return 0 ;
}



