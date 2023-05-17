#include <iostream>
#include <algorithm>
using namespace std;
const int N = 15;

int cnt[N];
int n;
int res ; 
int ans [60000][N];
void dfs(int x , int sum ){
	if(sum > n ) return ;
	if( x > 10 ){
		if( n == sum ) {
			res ++ ; 
			for( int i = 1 ; i <= 10 ; i++ ){
				ans[res][i]=cnt[i]; 
			}
		}
		return ;
	}
	for(int i = 1 ; i <= 3; i ++){
		sum += i;
		cnt[x] = i;
		dfs(x+1,sum);
		sum -= i;
		cnt[x] = 0;
	}
	return ; 
}

int main(){
	cin >> n;
	if(n>=10&&n<=30){
		dfs(1,0);
	cout << res << endl ;
	for(int i = 1; i <= res ; i++)
		{
			for(int j = 1 ; j<=10 ;j++){
				printf("%d ",ans[i][j]);
			}
			printf("\n");
		}
	 
	}else cout << '0' << endl;
	
	return 0;
}
