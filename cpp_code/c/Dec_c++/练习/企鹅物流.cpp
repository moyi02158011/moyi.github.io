#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
	queue<char>a[105];
	queue<char>ans;
	stack<char>kuang;
	int N,M,S;
	cin >> N >> M >> S;
	char k;
	for (int i=1;i<=N;i++){
		for (int j=1;j<=M;j++){
			cin >> k;
			a[N].push(k);  
		}
	}
	int b=0;
	
	while(b!=-1){
		scanf("%d",&b);
		if (b==-1)
		break;
		
		else{
			if(b==0)
			{
				if(kuang.size()>0){
					ans.push(kuang.top());
					kuang.pop();
				}
			}
			else{
				if(kuang.size()==S){
					ans.push(kuang.top());
					kuang.pop();
				}
				if(a[b].size()){
				kuang.push(a[b].front());
				a[b].pop();	
				}
			}
		}
	}
	
	while(ans.size()>0){
		char x = ans.front();
		cout << x;
		ans.pop();
	}
	
	return 0;
 } 
