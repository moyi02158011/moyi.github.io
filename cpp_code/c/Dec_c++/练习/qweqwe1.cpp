#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int n ;
	cin >> n;
	
	string a;
	getchar();
	while (n --){
		getline(cin , a);
		cout << a;
	}
	
	return 0;
}
