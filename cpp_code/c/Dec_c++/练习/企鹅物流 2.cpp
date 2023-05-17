#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
using namespace std;

int N,M,S;
queue<char>guidao[110];
stack<char>kuang;
vector<char>ans;

int main(){
	cin>> N >> M >> S;
	
	string a;
	for (int i=0;i<N;i++){
		cin >> a;
		for(int j=0;j<M;j++){
			guidao[i].push(a[j]);
		}
	}
	
	int b=0;
	char c;
	while (1){
		cin >> b;
		if(b==-1){
			
			break;	
		}
		if(b==0){
			if(kuang.size()){
				ans.push_back(kuang.top());
				kuang.pop();
			}
			continue;
		}
		if(S==kuang.size()) 
		{
			ans.push_back(kuang.top());
			kuang.pop();
		}
		b-=1;
		if(guidao[b].size())
		{
			c=guidao[b].front();
			guidao[b].pop();
			kuang.push(c);
		}
	}
	for (int i = 0;i<ans.size();i++){
		cout << ans[i];
	}
	return 0;
}


