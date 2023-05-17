#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

bool check(char a, char b){
	if(a=='Y'&&b=='e') return true;
	if(a=='e'&&b=='s') return true;
	if(a=='s'&&b=='Y') return true;
	return false ;
}

int main(){
	int t ;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		
		int n = s.size();
		
		if(n==1&&(s[0]=='Y'||s[0]=='e'||s[0]=='s')) {
			cout << "YES" << endl;
			continue;
		}
		
		
		if(n>1){
			for(int i = 1 ; i < n; ++i){
			if(!check(s[i-1],s[i])) {
				cout << "NO" << endl;
				break;
			}
			if(i==n-1){
				cout << "YES" <<endl;
				break;
			} 
		}
		continue;
		}
		
		cout << "NO" << endl;

	}
	
	return 0;
}

