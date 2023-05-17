#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int ans = 0;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};
bool maze[4][4];

int dfs (int x,int y, int cnt){
	maze[x][y] = 1;
	if (cnt == 16) {
		return 1;
	}	
	int res = 0; 	
	for (int i = 0 ; i < 4 ; i++){
		int tx = x + dx[i] , ty = y +dy[i];
		if (tx >=0 && tx < 4 && ty >= 0 && ty < 4 && !maze[tx][ty] ){	
			res += dfs ( tx , ty , cnt+1);
			maze[tx][ty] = 0;
		}
	}
	return res;
}

int main (){
	for (int i = 0 ; i < 4 ; i++){
		for (int j = 0 ; j < 4 ; j ++){
		ans += dfs( i , j , 1);
		maze[i][j] = 0;	
		}
	}
	cout << ans << endl;
	return 0;
}
