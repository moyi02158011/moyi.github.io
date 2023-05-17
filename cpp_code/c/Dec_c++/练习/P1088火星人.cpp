#include <iostream>
#include <algorithm>

using namespace std;

const int N = 10000 + 10;

int n , m;
int a[N];
bool check[N];
int res ;
int arr[N];
bool is_return = false;

void dfs(int x){
	if(is_return) return;
	if(x>n){
		res ++ ;
		if(res == 1+m){
			is_return = true ;
			for(int i = 1; i<= n ; i++){
				printf("%d ",arr[i]);
			}
		}
		return ;
	}
	
	for(int i = 1 ; i <= n ;i++){
		if(!res) i = a[x];
		if(!check[i]){
			arr[x] = i ;
			check[i] = 1;
			dfs(x+1);
			check[i] = 0;
			arr[x] = 0;
		}
	}
}

int main(){
	cin >> n >> m ;
	for(int i = 1; i <= n ; i++){
		scanf("%d",&a[i]);
	}
	
	dfs(1);
	
	return 0 ;
}

