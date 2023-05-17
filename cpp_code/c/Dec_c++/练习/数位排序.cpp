#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6+10;
int a[maxn],b[maxn];
bool cmp(int x,int y)
{
	return b[x]<b[y]||b[x]==b[y] && x<y;
}
int main ()
{
	int n,m;
	cin >>n>>m;
	for (int i=1;i<=n;i++)
	{
		int num =i;
		while(num){
			b[i]+=num%10;
			num/=10;
		}
		a[i]=i;
	}
	sort(a+1,a+1+n,cmp);
	cout <<a[m]<<endl;
	return 0;
}

