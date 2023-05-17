#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
#include <cstdio>
#include <unordered_map>

using namespace std;

int dx[] = { 1 , -1 ,  2 , -2 } ;
string st = "123456780" , ed = "876543210" ;

const int n = 9 ;

int ans = 0;
int bfs () {
	unordered_map<string,int>dist;
	queue<string> q;
	dist[st] = 0;
	q.push(st);	
	int i = 1; 
	while (q.size()){
		string t = q.front();
		q.pop();
		int k = t.find('0');
		
		for (int i = 0 ; i < 4 ; i++){
			string str = t;
			swap(str[k],str[(k + dx[i] + n) % n]);
			if(dist.count(str)) continue;
			dist[str] = dist[t] + 1;
			if(str == ed) return dist[str];
			q.push(str);
		}
	}		
	return -1;			
} 

int main (){
	ans = bfs();
	cout << ans << endl;
	return 0;
}
