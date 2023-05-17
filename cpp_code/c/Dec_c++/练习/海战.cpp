#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>

using namespace std;
int r,c;
string maze[1010];
int dx[4]={0,-1,1,0};
int dy[4]={-1,0,0,1};
int dfs(int x,int y){
	maze[x][y] = '.';
	for(int i= 0 ; i <4; i++){
		if(x+dx[i] >= 0 && x+dx[i]<r &&y+dy[i] >=0 &&y+dy[i]<c&&
		maze[x+dx[i]][y+dy[i]]=='#') dfs(x+dx[i],y+dy[i]);
	}
}
int s;
int main (){
	cin >> r >> c;
	for (int i = 0; i < r;i++ ){
		cin >> maze[i];
	}
	
	for (int i = 0 ; i < r ;i++){
		for (int j = 0 ; j <c ; j++){
			if(maze[i][j]=='#'){
				s++;
				dfs(i,j);
			}
		}
	}
	cout << s << endl ;;
	return 0;
}
