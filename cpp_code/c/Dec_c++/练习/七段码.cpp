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
int bright[7]; // ��һ�ַ�������i�����ģ�bright[i]Ϊ1
int vis[7];
void dfs(int stick){
	for(int i = 0; i < 7; i ++ ){
		if(g[stick][i] && bright[i] && !vis[i]){
         //i�������stick�������ģ�����i�����ģ�֮ǰ��û����i
			vis[i] = 1; dfs(i);//������ڵ�����i����i����dfs����
		}
	}
   //���������dfs(stick), ��ôdfs��������i��vis���Ϊ1�ˣ�
//Ҳ������stick�����Ĳ�������i���߹��ˡ�
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
//��ô��stick��ʼdfs���������ĵ㣨�����ܣ���vis���Ϊ1�ˡ�
		for(j = 0; j < 7; j ++ ){
			if(bright[j] && !vis[j]) {
				ans--;
				break;
			}
         //���j �����ģ�����ȴû���߹�����Ҳ����˵��stick���ܵ���j��stick��j�Ǹ����
         //��ô ��һ��bright���������ǺϷ��ģ����˳�������j��С��7.
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

