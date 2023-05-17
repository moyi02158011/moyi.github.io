#include <iostream>
using namespace std;
typedef long long LL;

int main(){
	LL n=0;
	for (LL i=1;i<=1000000007;i++)
	{
		if(i*2021%1000000007==999999999)
		{
			n=i;
			break;
		}
	}
	cout << n<< endl;
	return 0;
}
