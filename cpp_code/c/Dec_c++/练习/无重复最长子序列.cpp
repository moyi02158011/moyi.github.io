#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main(){
	string s;
	int ans =0;
	cin >> s;
	unordered_set<char>occ;
	int n = s.size();
	int j = -1;
	for(int i = 0; i<n ; ++i){
		if( i != 0 ) occ.erase(s[i-1]);
		while (j+1 < n && !occ.count(s[j+1])){
			occ.insert(s[j+1]);
			j++;
		}
		ans = max ( j - i+1,ans );
	}
	cout << ans << endl;
	
	return 0;
}

