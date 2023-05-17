#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,m;
vector<int>chosen;
int ans = 0; 
void calc(int x) {
	if( chosen.size()>m || chosen.size()+(n-x+1)<m) return ;//剪枝 选择的数字多于m个 或者已选的加剩下的数字不足m个 就不用继续选下去了 
	
	if(x==n+1){//递归到n+1层 前面没返回（即共选择了m个数 输出这m个数 并且记录答案的个数） 
		for(int i = 0; i < chosen.size();i++)
		printf("%d ",chosen[i]);
		cout << "\n" ;
		ans ++;
		return ; 
	}
	
	calc(x+1); //下一个数不选 进入下一位 
	
	chosen.push_back(x+1);// 选下一个数 
	calc(x+1); // 进入下一位 
	chosen.pop_back();//恢复现场 
	return ;
}
int main(){
	cin >> n >> m;
	calc(1);
	cout << ans ; 
	return 0;
}
