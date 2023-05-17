#include<iostream>
#include<queue>
#include<cstring>
#include <algorithm>
using namespace std;

const int N =55;
int n,m;
string maze[30];
bool vis[110][110];

int dir[4][2] = {
    {1, 0}, {0, -1}, {0, 1}, {-1, 0}
};
char dirchar[5]{'D','L','R','U'}
bool check(int x,int y){
	return 0 <= x && x <= n && y >= 0 && y <= m && !maze[x][y]; 
}
struct node{
	int x , y , step;
	char direction;
	node father;
};

node now;
node next;
int bfs(int x,int y){
	queue<node> q;
	vis[x][y]=true;
	now.x=x;
	now.y=y;
	now.step=0;
	q.push(now);
	
	while (q.size()){
		now=q.front();
		q.pop()
		for (int i=0;i<4;i++){
			int tox=now.x+dir[i][0];
			int toy=now.y+dir[i][1];
			if(check(tox,tox)&&!vis[tox][toy]){
				vis[tox][toy]=true;
				next.x=tox;
				next.y=toy;
				next.step=now.step + 1;
				next.direction=dirchar[i];
				q.push(next);
				next.father=now;
				if (tox==n-1&&toy==m-1)
				return ;
			}				
		}
	}
	retu
}


int main(){
	return 0;
}
