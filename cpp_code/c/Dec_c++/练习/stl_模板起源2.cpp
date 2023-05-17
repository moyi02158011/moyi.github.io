#include<iostream>
using namespace std;

#define MAX(T) T max_##T(T x, T y){return x>y?x:y;}
#define MIN(TT) TT min_##TT(TT x,TT y){return x<y? x:y;}
#define Max(T) max_##T
#define Min(TT) min_##TT
MAX(int)
MAX(double)
MAX(string)
MIN(int)
MIN(double)
MIN(string)

int main1232()
{
	int a=12,b=17;
	double a1=24.1,b1 =46.2;
	string a2="hello",b2="word";
	cout<<Max(int)(a,b)<<' '<<Min(int)(a,b)<<endl;
	cout<<Max(double)(a1,b1)<<' '<<Min(int)(a1,b1)<<endl;
	cout<<Max(string)(a2,b2)<<' '<<Min(string)(a2,b2)<<endl;
	
	return 0;
 } 
