#include <iostream>
#include <algorithm>

using namespace std;


int a[10];
string n; 

int main (){

	cin >> n ;

	for (int i = 0 ; i < n.size() ; i++){
		a[n[i]-'0']++;
	}
	for (int i = 0 ; i < 10; i++ ){
		if(a[i]) printf("%d:%d\n",i,a[i]);
	}
	
	return 0 ;
}
