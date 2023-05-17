#include<iostream>
#include<vector>
using namespace std;
const int N =110;
bool g[N][N];
vector<int>q[N];
int ans=200;
int n,m;
bool check(int i,int b){
	for(int j=0;j<q[i].size();j++)
	if(g[b][q[i][j]]) 
	return false;
	return true;
}
void dfs(int now,int cnt){
	if(cnt>=ans)
	{
		return;
	}
	if(now==n+1)
	{
		ans =min(ans,cnt);
		return;
	}
	for (int p=0;p<=cnt;p++)
	{
		if(check(p,now)){
			q[p].push_back(now);
			dfs(now+1,cnt);
			q[p].pop_back();
		}
	}
	if(cnt+1<=n)
	{
		q[cnt+1].push_back(now);
		dfs(now+1,cnt+1);
		q[cnt+1].pop_back();
	}
}
int main(){
	int a,b;
	cin >> n >> m ;
	while(m--)
	{
		cin >>a >> b;
		g[a][b]=true;g[b][a]=true;
	}
	dfs(1,0);
	cout << ans+1 << endl;
	return 0;
}
