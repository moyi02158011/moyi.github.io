#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std ;

const int MAX_N = 1010 ; 

int v[MAX_N];
int w[MAX_N];

int n , m ;

//ѡ���ܳ����������� ��i�Ż��￪ʼ �������ֻ��ѡ�� 
int dfs (int i,int bag){
	if (bag < 0 ) return 0;
	if (i == n) return 0;
	
	//�л��пռ�
	int p1 = dfs(i+1, bag);//��Ҫ��ǰ�Ļ� 
	
	//Ҫ��ǰ�Ļ�
 	int p2 = 0 ; 
	if(bag >= v[i])
 	p2 = w[i] + dfs(i + 1 , bag - v[i]); 
 	
 	return max(p1,p2);
}


int main (){
	cin >> n  >> m ; 
	for(int i = 0; i < n; i++)
		cin >> v[i] >> w[i] ;
	
	cout << dfs(0,m); 		
	return 0 ; 
}
