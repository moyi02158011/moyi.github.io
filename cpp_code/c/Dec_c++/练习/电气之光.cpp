#include <iostream>
#include <algorithm>

using namespace std;

const long long N = 2*1e5 + 10;

int main (){
	int t ;
	cin >>t;

	while (t--){
		int n = 0;
		scanf("%d",&n);
		long long a[N];
		int ans = 0; 
		for(int i=1 ; i<=n;i++ ){
			scanf("%d",&a[i]);
		}
		for(int i = 1; i <= n; i++)
		for(int j = i; j <= n; j++){
			if(a[i]<i&&i<a[j]&&a[j]<j) ans++;
		}
		cout << ans << endl;
	}
	
}
