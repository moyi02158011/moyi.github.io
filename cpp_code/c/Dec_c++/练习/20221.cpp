#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

const int N = 1e3 +10 ;

queue<int>q;
stack<int>s;

int main(){
	int n , m , k;
	cin >> n >> m >> k ;
	
	
	for(int i = 1; i <= n ; i++){
		int a;
		scanf("%d",&a);
		q.push(a); 
	}
	
	while (s.size()||q.size())
	{
		queue<int> ans;
		
		while(!ans.size() || ans.front() >= s.top()|| ans.front() >= q.front() || ans.front() < q.front()&&s.size()<m){
			if(!ans.size()){
				if(s.size()){
					ans.push(s.top()) ;
					s.pop();
				}else
				{
					ans.push(q.front()) ;
					q.pop();
				}
			}
			
			while(s.size()){
				if(ans.front()<s.top())break;
				
				ans.push(s.top()) ;
				s.pop();
			}
			
			while(q.size()){
				if(ans.front()<q.front())break;
				ans.push(q.front()) ;
				q.pop();
			}
			
			while(s.size()<m && q.front()>ans.front()){
				s.push(q.front());
				q.pop();
			}
		}
	
		while (ans.size()){
			cout << ans.front();
			ans.pop();
			if(!ans.size())
			cout << ' ' ;
		}
		
		cout << endl;
	}
	
	
	
	return 0 ;
}
