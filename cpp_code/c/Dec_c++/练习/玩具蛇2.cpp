#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
int dx[] = {0, 1, 0, -1}, dy[] = {-1, 0, 1, 0};
int n = 4;
int g[4][4];
int dfs(int x, int y, int k)		//	dfs	在 (x, y) 中 放上 k 的方案数 
{
	g[x][y] = k;
	if (k == 16)		//	搜到了最后一个位置	搜索成功 
		return 1;
	
	int res = 0;
	for (int i = 0; i < 4; ++ i )
	{
		int tx = x + dx[i], ty = y + dy[i];
		if (tx < 0 || ty < 0 || tx >= n || ty >= n || g[tx][ty] != 0)
			continue;
		res += dfs(tx, ty, k + 1);
		g[tx][ty] = 0;				//	恢复现场 
	}
	
	return res;
}

int main()
{
	int res = 0;
	for (int i = 0; i < n; ++ i )
		for (int j = 0; j < n; ++ j )
		{
			res += dfs(i, j, 1);
			g[i][j] = 0;
		}
	
	cout << res << endl;
	
	return 0;
}

