#include <iostream >
#include <algorithm >
using namespace std;

//  ±º‰∏¥‘”∂» O 
300(lgb) 
int gcd (int a,int b){
	if ( b == 0 ) return a;
	return gcd (b , a%b);
}


int x,y;//d = gcd(a,b) = ax + by;
int gcdxy(int a , int b ){
	if (b == 0) {
		x = 1 ;  
		y = 0 ;
		return a;
	}
	int d = gcdxy( b , a % b);
	x = y ; 
	y = (d - a*x)/b;
	return d;
}


int main (){
	int a = 99 , b = 78;
	int d = gcdxy(99 , 78 );
	
	cout <<"d = "<< gcd (99 , 78) << endl ;
	cout << "d = " << d << ";x=" << x <<";y=" << y << endl;
	
	return 0 ; 
	
}
