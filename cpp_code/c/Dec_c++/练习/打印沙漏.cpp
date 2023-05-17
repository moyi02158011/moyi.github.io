#include <iostream>

using namespace std ;

int n ;
char m;

int main(){
    cin >> n >> m;
    if (n == 1){
    	cout << m <<endl ;
    	cout << 0 ;
    	return 0;
	}else if (n == 0) {
		cout << 0 ;
		return 0;
	}
    int x = 0 ;
    for ( x  ; ; x++ ){
        if(n+1 <= (x + x*(x - 1)*2/2)*2) {
            x-- ;
            break ;
        }
    }
    n -= (x + x*(x - 1)*2/2)*2 - 1 ;
    for (int i = x , j = 0 ; i > 0 ; i -- , j ++){
        for (int k = 0 ; k < j ; k ++){
            printf (" ") ;     
        }
        for (int k = i*2-1 ; k > 0 ; k-- ){
            printf ("%c",m);
        }
        cout << endl ;
    } 
    
    for (int i = 1 , j = x-2 ; i < x ; i ++ , j --){
        for (int k = j ; k > 0 ; k --){
            printf (" ") ;     
        }
        for (int k = i*2+1 ; k > 0 ; k-- ){
            printf ("%c",m);
        }
        cout << endl ;
    }
    
    
    if( n != 0 ) cout << n ;
    return 0;
}
