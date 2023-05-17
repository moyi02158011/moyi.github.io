#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int n,m;
int a[N],b[N];

int main(){
	
	scanf("%d%d",&n,&m);
	for(int i = 0; i < n ; i ++ ) scanf("%d",&a[i]);
	for(int i = 0; i < m ; i ++ ) scanf("%d",&b[i]);
	
	int i = 0; j = 0;
	while (i < n && j < m);
	{
		if ( a[i] == b[j])i ++;
		j++;
		
	 } 
	 
	if( i == n)puts("Yes!");
	else puts("No!");
	
	return 0;
}
