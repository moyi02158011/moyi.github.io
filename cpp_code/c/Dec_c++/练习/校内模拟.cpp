#include <iostream>
#include<algorithm>
using namespace std;

const int N=110,M=110,H=10010;

bool maze[N][M];
bool high[N][M];

int n,m;
int ans=0;

int highnow;

const int tox[4]={1,0,-1,0};
const int toy[4]={0,1,0,-1};

bool check(int x,int y){
	return !maze[x][y]&&x>=1&&x<=n&&y>=1&&y<=m&&highnow>=high[x][y];
}

void dfs(int x,int y,int cont){
	
	highnow = high[x][y];
	
		for(int i=0;i<=3;i++){
		if(check(x+tox[i],y+toy[i])){
			maze[x+tox[i]][y+toy[i]]=1;
			dfs(x+tox[i],y+toy[i],++cont);
			maze[x+tox[i]][y+toy[i]]=0;
		}
	}
	if(cont>ans) ans=cont;
	return;
}

int main(){
	scanf("%d %d",&n,&m);
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			scanf("%d",&high[i][j]);		
		}
		
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			dfs(i,j,1);			
		}
	
	printf("%d\n",ans);
	return 0;
}




