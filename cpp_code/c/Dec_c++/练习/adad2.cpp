#include <iostream>
#include <algorithm>

using namespace std;
const int N = 30010, M = 30;

int n , m;
int v[M],p[M];

int f[N] ;
int main(){
	cin >> n >> m;
	
	for(int i = 1 ; i <= m ; i++) scanf("%d%d",&v[i],&p[i]);
	for(int i = 1 ; i <= m ; i++) p[i] *= v[i];
	
	for(int i = 1 ; i <= m ; i ++) 
		for(int j = n ; j >= 0 ; j -- )
		if(j>=v[i])
			f[j] = max(f[j] , f[j-v[i]] + p[i]);
				
	cout << f[n] << endl;
	return 0 ;
}
