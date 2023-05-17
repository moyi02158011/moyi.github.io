#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>

#define x first
#define y second

using namespace std;

const int N = 55;

typedef pair<int, int> PII;

int nex[4][2] = {
    {1, 0}, {0, -1}, {0, 1}, {-1, 0}
};

int n = 30, m = 50;
char g[N][N];
int dist[N][N];
PII pre[N][N];
char dir[N][N];

int bfs()
{
    memset(dist, -1, sizeof dist);
    dist[0][0] = 0;
    queue<PII> q;
    q.push({0, 0});
    
    while (q.size())
    {
        auto t = q.front();
        q.pop();
        
        for (int i = 0; i < 4; ++ i )
        {
            int tx = t.x + nex[i][0], ty = t.y + nex[i][1];
            if (tx < 0 || ty < 0 || tx >= n || ty >= m || dist[tx][ty] != -1 || g[tx][ty] == '1')
                continue;
            dist[tx][ty] = dist[t.x][t.y] + 1;
            q.push({tx, ty});
            g[tx][ty] = '1';
            pre[tx][ty] = t;
            switch(i)
            {
                case 0: dir[tx][ty] = 'D'; break;
                case 1: dir[tx][ty] = 'L'; break;
                case 2: dir[tx][ty] = 'R'; break;
                case 3: dir[tx][ty] = 'U'; break;
            }
        }
    }
    
    return dist[n - 1][m - 1];
}

int main()
{
    for (int i = 0; i < n; ++ i )
        cin >> g[i];
    
    bfs();
    
    string res;
    PII end = {n - 1, m - 1};
    
    while (end.x != 0 || end.y != 0)
    {
        res += dir[end.x][end.y];
        end = pre[end.x][end.y];
    }
    
    reverse(res.begin(), res.end());
    cout << res << endl;
    
    return 0;
}
