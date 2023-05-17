#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;
typedef pair<int, int> PII;
const int N = 110 ;
int maze[N][N];
int n , m ;
int ans[N][N];

int bfs(){
    queue<PII>q;
    q.push({0,0});
    int dx[] = {0,1,0,-1};
    int dy[] = {1,0,-1,0};
    maze[0][0] = 1;
    while (q.size()){
        auto t = q.front();
        q.pop();
        for(int i = 0 ; i < 4 ; i ++){
            int x = t.first + dx[i] ;
            int y = t.second + dy[i];
            if(x >= 0 && x  < n && y >= 0 && y< n && maze[x][y]!=1 ){
                ans[x][y] = ans[t.first][t.second] + 1 ; 
                maze[x][y] = 1 ;
                q.push({x,y});
            }
        }
    }
    
    return ans[n-1][m-1];
}

int main(){
    cin >> n >> m ;
    for (int i = 0 ; i < n ; i++)
    for (int j = 0 ; j < m ; j++)
    cin >> maze[i][j];
    
    cout << bfs() ;
    
    return 0 ; 
}
