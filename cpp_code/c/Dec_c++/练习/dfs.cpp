#include<iostream>
#include<cstring>
using namespace std;
int n,m;
string maze[110];
bool vis[110][110];
bool in(int x,int y){
	return 0 <= x && x < n && 0 <= y && y < m;
}
bool dfs(int x,int y){
	if(maze[x][y] == 'T'){
		return true;
	}
	vis[x][y]=1;
	maze[x][y]='m';
	int tx = x - 1, ty = y;
	if (in(tx,ty) && maze[tx][ty] != '*' && vis[tx][ty]){
		if(dfs(tx,ty))
		return true;
	}
	int tx = x, ty = y - 1;
	if (in(tx,ty) && maze[tx][ty] != '*' && vis[tx][ty]){
		if(dfs(tx,ty))
		return true;
	}
	int tx = x + 1, ty = y;
	if (in(tx,ty) && maze[tx][ty] != '*' && vis[tx][ty]){
		if(dfs(tx,ty))
		return true;
	}
	int tx = x, ty = y + 1;
	if (in(tx,ty) && maze[tx][ty] != '*' && vis[tx][ty]){
		if(dfs(tx,ty))
		return true;
	}
	vis[x][y] = 0;
	maze[x][y] = '.';
	return flase;
}
int main(){
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> maze[i];
	}
	int x,y;
	for(int i = 0; i < n; i++ ){
		for(int j = 0; j < m; j++){
			if(maze[i][j] == 'S'){
				x=i;y=j;
			}
		}
	}
	if(dfs(x,y)){
		for(int i=0 ; i<n ; i++)
		{
			cout << maze [i] <<endl;
		}
	}
	else 
	cout << "no" << endl;
	return 0;
}

