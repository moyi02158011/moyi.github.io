#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

const int N = 21;

int n,r;

int ans[N];

void dfs(int x,int y){
	
	if(x>r){
		for(int i = 1;i <= r; i ++){
			printf("%3d",ans[i]);
		}
		cout << endl;
		return ;
	}
	
	for(int i=y;i<=n;i++){
		ans[x]=i;
		dfs(x+1,i+1);
		ans[x]=0;
	}
}

int main(){
	scanf("%d %d",&n,&r);
	dfs(1,1);
	return 0;
}
