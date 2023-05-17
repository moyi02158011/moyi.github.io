#include <iostream>

using namespace std ; 
const int N = 1e6 ;

int prime[N],cnt,cntl = -1;
bool st[N];

void get_primes(int l ,int r ){
    for (int i = 2;  i <= r ; i ++){
    	if(i>=l&&cntl==-1) cntl = cnt;
        if(!st[i])prime[cnt++] = i ;
        for (int j = 0 ;prime[j] <= r /i ; j ++ ){
            st[prime[j] * i ] =true;
            if(i%prime[j]==0) break;
        }
        
    }
}
int l , r ;
int main (){
    cin >> l >> r; 
    get_primes(l,r);
    cout << cnt - cntl ; 
    return 0 ;
}
