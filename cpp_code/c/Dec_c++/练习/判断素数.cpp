#include <iostream>
#include <algorithm>
using namespace std ; 

int n ;

bool is_prime(int x){
    if (x < 2) return false ; 
	for(int i=2;i<=x/i;i++)
	if(x%i==0)
	return false;
	return true; 
}
int main (){
	cin >> n ; 
	while (n--){
		long long a;
		scanf("%d",&a);
		if(is_prime(a)) puts("Yes");
		else puts("No");
	}
	return 0 ; 
}
