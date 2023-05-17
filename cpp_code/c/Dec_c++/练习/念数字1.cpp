#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std ;

int main(){
    
    string s;
    cin >> s;

    for (int i = 0 ; i <s.size() ; i++)
    {
    	switch(s[i]){
    		case '0': cout << "ling" ; break;
			case '1': cout << "yi" ; break ;
			case '2': cout << "er" ; break ;
			case '3': cout << "san"; break ;
			case '4': cout << "si"; break ;
			case '5': cout << "wu" ; break ;
			case '6': cout << "liu" ; break ;
			case '7': cout << "qi" ; break ;
			case '8': cout << "ba" ; break ;
			case '9': cout << "jiu"; break ;
			case '-': cout << "fu" ; break ;
		}
		if (i!=s.size() - 1) cout << ' ' ;
	}
    return 0;
}
