#include<iostream>
#include<cstring>
using namespace std;
bool maze[4][4];
const int dirx[4]={1,0,0,-1};
const int diry[4]={0,1,-1,0};
bool check(int a, int b){
	return a>=0&&a<=3&&b>=0&&b<=3&&!maze[a][b];
}
int dfs(int x,int y,int cnt){
	maze[x][y]=true;
	if(cnt==16)
	return 1;
	int res =0; 
	for(int i=0;i<4;i++){
		int tox=x+dirx[i];
		int toy=y+diry[i];
		if(check(tox,toy)){
			res+=dfs(tox,toy,cnt+1);
			maze[tox][toy]=false;
		}
	}
	return res;
}
int main()
{
	int ans = 0;
	for (int i = 0; i < 4; ++ i )
		for (int j = 0; j < 4; ++ j )
		{
			ans += dfs(i, j, 1);
			maze[i][j] = 0;
		}
	cout << ans << endl;
	return 0;
}
