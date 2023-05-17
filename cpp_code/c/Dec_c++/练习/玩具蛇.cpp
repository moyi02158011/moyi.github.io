#include<iostream>
#include<cstring>
using namespace std;

int dx[] = {0,1,0,-1};
int dy[] = {-1,0,1,0};
int n=4;
int g[4][4];

int dfs(int x,int y,int k){
	g[x][y]=k;
	if(k == 16)
		return 1;
	int res = 0;
	for(int i=0;i<4;i++){
		int tx = x + dx[i];
		int ty = y + dy[i];
		if( tx < 0 || tx < 0 || tx >= n || ty >= n || g[tx][ty] != 0)
			continue ;
		res += dfs(tx, ty , k + 1 );
		g[tx][ty]=0;
	}
	return res;
}
int main ()
{
	int res = 0;
	for (int i = 0;i < n; i++)
		for ( int j =0 ; j < n ; j++)
		{
			res+= dfs (i,j,1);
			g[i][j] = 0;
		}
	cout << res << endl;
	return 0;
}
