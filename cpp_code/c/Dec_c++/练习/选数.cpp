#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

const int N=30;

int n,k;
int q[N];
int arr[N];
int res =0;

bool is_prim(int sum){
	if(sum < 2) return flase;
	for(int i=2;i<=sum/i;i++){
		if(sum%i==0) return false;
	}
	return true;
}

void(int x,int y){
	if(x>k){
		int sum=0;
		for(int i=1;i<=k;i++){
			sum+=arr[i];
		}
		if(is_prim(sum)) res++;
		return;
	}
	
	
	
	for(int i=y;i<=n;i++){
		arr[x] = q[i];
		dfs(x+1;i+1);
		arr[x]=0; 
	}
}

int main(){
	cin >> n >> k ;
	for(int i=1;i<=n;i++){
		scanf("%d",&q[i]);
	}
	dfs(1,1);
	return 0;
}
