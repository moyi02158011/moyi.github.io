#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std ;

const int N = 1010;

string stu[N][2];

int n ,m;
int main (){
	
	cin >> n;
	
	while (n--){
		int b ; 
		string a,c;
		cin >> a >> b >> c;
		stu[b][0]=a;
		stu[b][1]=c;
	}
	
	cin >> m ; 
	while (m --){
		int x;
		cin >> x;
		cout << stu[x][0] << ' ' << stu[x][1] << endl;
	}
	
}
