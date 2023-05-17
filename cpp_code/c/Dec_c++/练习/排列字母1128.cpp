#include<iostream>
#include<algorithm>
using namespace std;
const long long maxn =1e6+10;
long long a[maxn],b[maxn];
long long digit(long long n)
{
	long long digit=0;
	if(n<10)
	return n;
	else 
	while(n>=10)
	{
		digit+=n%10;
		n/=10;
		if(n<10)
		digit+=n;
	}
	return digit;
}
bool cmp(long long x,long long y)
{
	return (b[x]<b[y])||((b[x]==b[y])&&x<y);
} 
int main231()
{
	long long n, m;
	cin >> n >> m ;
	for(long long i =1;i<=n;i++)
	{
		a[i]=i;
		b[i]=digit(i);
	}
	sort(a+1,a+n,cmp);
	cout <<a[m]<<endl;
	return 0;
} 
