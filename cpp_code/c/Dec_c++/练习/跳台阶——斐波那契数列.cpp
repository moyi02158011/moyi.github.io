#include<iostream>

using namespace std;

int n;
int f(int x)
	{
		if(x==1)return 1;
		if(x==2)return 1;
		return  f(1) + f(2) ;
		
	}

int main()
{
	scanf("%d",&n);
	int res = f(n);
	printf("%d\n",res);
	return 0;
	
}
