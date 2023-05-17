#include <iostream>

using namespace std;

const int N = 100010;

int maze[N][N];
int main(){
	int n , m ;
	scanf("%d%d",&n,&m);
	for(int i = 1 ; i <= n ; i ++){
		for(int j = 1; j <= m ; j ++){
			cout << i <<' ' << j  << ' ';
			scanf("%d",&maze[i][j]);
		}
	}
	
	return 0;
}
