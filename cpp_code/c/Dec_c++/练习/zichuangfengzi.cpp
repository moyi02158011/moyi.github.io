#include <iostream>
#include <algorithm>
#include <cstring>
#include <unordered_set>

using namespace std;

int main(){
	string str;
	cin >> str;
	int n = str.size() ;
	str = ' ' + str;
	
	int res = 0;
	for(int l = 1 ; l <= n ; ++ l){
		for(int r = l ; r <= n ; ++ r){
			unordered_set<char>S, T;
			for(int i = l; i<= r; ++i){
				char c = str[i];
				if(S.count(c)){
					S.erase(c);
					T.insert(c);
				}
				else if(!S.count(c)&& !T.count(c)){
					S.insert(c);
				}
				
			}
			res += S.size();
		}
	}
	
	cout << res <<endl ;
	return 0;
}
