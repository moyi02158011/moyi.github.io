#include <iostream>
#include <cstring>
using namespace std;

const int N = 100010;

string maze[N];
int n,m ;
bool st[N];
int idx;
int ans;//baodao

void dfs(int x , int y , int idx){
    if(maze[x][y] != '1'){
        st[idx] = true;
		ans ++;
    }
    
	maze[x][y] = 0;
	int dx[4] = { 0 , 1 , 0 , -1};
	int dy[4] = { 1 , 0 , -1 , 0};	
	for(int i = 0 ; i < 4 ; i ++){
		int tx = x + dx[i],ty = x + dy[i];
		if(tx >= 0 && tx < n && ty > 0 && ty < m && !maze[tx][ty]){
			if(st[idx] != '0'&& maze[tx][ty] != '1'){
				st[idx] = true;
				ans ++;
			}
			dfs(tx,ty,idx);
		}
	}
}


int main(){
	cin >> n >> m;
	for(int i = 0 ; i < n ; i ++){
		cin >> maze[i];
	}
	
	for(int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < m ; j ++){
			if(maze[i][j] != '0') dfs(i , j ,++idx);
		}
	}
		
	cout << idx << ' ' << ans;
	return 0;
}


