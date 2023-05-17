#include<iostream>
#include<cstring>
using namespace std;
const int dirx[4] = { 0,0,1,-1 };
const int diry[4] = { 1,-1,0,0 };
const char dir[4] = { 'R','L','D','U' };

int maze[5][8]{
0,0,0,0,0,0,0,
0,0,1,0,0,0,0,
0,0,0,0,1,0,0,
0,0,0,1,0,0,1,
0,1,1,0,0,0,0
};

int mins[30][50];

char a[2000];
int best;
string ans;
bool judge(int x, int y) {
	if (x > 0 && x <= 6 && y > 0 && y <= 4 && !maze[x][y])
		return true;
	return false;
}
void dfs(int x, int y, int pos) {
	if (pos > best)
		return;
	if (x == 6 && y == 4) {
		string temp;
		for (int i = 1; i < pos; i++) {
			temp += a[i];
		}
		if (pos < best) {
			ans = temp;
			best = pos;
		}
		else if (temp < ans) ans = temp;
		return;
	}
	for (int i = 0; i < 4; i++) {
		int tox = x + dirx[i];
		int toy = y + diry[i];
		if (judge(tox, toy) && (pos + 1) <= mins[tox][toy]) {
			maze[tox][toy] = 1;
			mins[tox][toy] = pos + 1;
			a[pos] = dir[i];
			dfs(tox, toy, pos + 1);
			maze[tox][toy] = 0;
		}
	}
}

int main() {
	memset(mins, 1, sizeof(mins));
	best = 1 << 28;
	maze[1][1] = 1;
	dfs(1, 1, 1);
	return 0;
}