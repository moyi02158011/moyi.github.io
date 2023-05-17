#include <iostream>
#include <algorithm>

using namespace std;


int a[20] ;

int fbnq( int x ){
	if(a[x]) return a[x];
	
	a[x] = fbnq(x-1)+fbnq(x-2);
	return a[x];
	
}

int n,ans; 

int main(){
	a[1]=1; 
	a[2]=1;

	cin >> n ;
	ans = fbnq(n);
	cout << ans << endl;
	return 0;
}
