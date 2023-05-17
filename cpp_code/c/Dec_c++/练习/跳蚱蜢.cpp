#include <iostream>
#include <cstring>
#include <queue>
#include <unordered_map>

using namespace std;

int dx[]={1,-1,2,-2};

string st = "123456780",ed = "876543210";

int n = 9;

int bfs()
{
	unordered_map<string , int > dist;
	dist[st] = 0;
	queue<string> q;
	q.push(st);
	
	while (q.size()){
		string t = q.front();
		q.pop();
		
		int k = t.find('0');
		for(int i= 0;i<4;i++){
			string str =t;
			swap(str[k],str[(k+dx[i]+n)%n]);
			if(dist.count(str))
			continue;
			if (str == ed)
				return dist[str];
			q.push(str);
		}
	}
}

int main(){
	cout << bfs() << endl;
	return 0;
} 
