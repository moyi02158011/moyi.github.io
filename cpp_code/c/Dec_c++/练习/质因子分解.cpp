#include <iostream>
#include <algorithm>
using namespace std;

long long n ; 

const int N = 10010;
int p[N];
int ans[N];
bool is_prime(int x){
    if (x < 2) return false ; 
	for(int i=2;i<=x/i;i++)
	if(x%i==0)
	return false;
	return true; 
}

int main (){
	
	cin >> n ; 
	int cnt = 0 ;
	for (int i =1; i <=n ;i++){
		if(is_prime(i)){
			p[cnt] = i ;
			cnt ++;
		};
	}
	
	for (int i = 1; i<=n ;i++){ //n!=1*2*3*4*...n
		for (int j = 0 ; j < cnt && a <= p[j] ;j++){
			int a = i;
			while (a%p[j]==0){
				ans[p[j]]++;
				a/=p[j];
			}
		}
	}
	
	for (int i = 0 ; i <= cnt ; i++){
		if(p[i]==0) continue ; 
		
		printf ("%d %d\n",p[i],ans[p[i]]);
	}
	
	return 0 ;
}
