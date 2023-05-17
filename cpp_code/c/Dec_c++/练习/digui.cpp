#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

const int N=20;

int st[N];
int n;

void dfs(int x){
	
	if(x==0)
	{
		for(int i=1;i<=n;i++)
			{
			if(st[i]==1)printf ("%d ",i);
		}
		printf ("\n");
		return ;
	}
	
	st[x]=2;
	dfs(x-1);
	st[x]=0;
	
	
	st[x]=1;
	dfs(x-1);
	st[x]=0;
	

}

int main(){
	scanf("%d",&n);
	dfs(n);
	return 0;
}
