#include <bits/stdc++.h>
using namespace std;
int g[7][7] = {
	{0, 1, 0, 0, 0, 1, 0},
	{1, 0, 1, 0, 0, 0, 1},
	{0, 1, 0, 1, 0, 0, 1},
	{0, 0, 1, 0, 1, 0, 0},
	{0, 0, 0, 1, 0, 1, 1},
	{1, 0, 0, 0, 1, 0, 1},
	{0, 1, 1, 0, 1, 1, 0}
};
int bright[7]; // 对一种方案：若i是亮的，bright[i]为1
int vis[7];
void dfs(int stick){
	for(int i = 0; i < 7; i ++ ){
		if(g[stick][i] && bright[i] && !vis[i]){
         //i如果是与stick是相连的，并且i是亮的，之前还没到过i
			vis[i] = 1; dfs(i);//标记现在到达了i，从i继续dfs搜索
		}
	}
   //主程序调用dfs(stick), 那么dfs所到过的i都vis标记为1了，
//也就是与stick相连的并且亮的i都走过了。
} 
int main()
{
	int i, j, stick, x, ans = 127;
	for(i = 1; i <= 127; i ++ ){
		memset(bright, 0, sizeof(bright));
		memset(vis, 0, sizeof(vis));
		x = i, j = 0;
		while(x){
			if(x % 2) bright[j] = 1;
			x /= 2; j ++;
		}
		stick = 0;
		while(!bright[stick]) stick ++;
		vis[stick] = 1; dfs(stick);   
//那么从stick开始dfs，所到过的点（二极管）都vis标记为1了。
		for(j = 0; j < 7; j ++ ){
			if(bright[j] && !vis[j]) {
				ans--;
				break;
			}
         //如果j 是亮的，但是却没有走过它，也就是说从stick不能到达j，stick与j是隔离的
         //那么 这一套bright方案，不是合法的，就退出，这样j就小于7.
		}	
		if(j>=7){
	      char c;
	      for (int k=0;k<7;k++){
			if(bright[k]){c='a'+k; cout<<c;}
		  
		  }
			cout<<endl;
		}	
	}
	cout<<ans<<'\n';
	return 0;
}

