#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN =1e4+10;
LL factor[MAXN];
int main(){
	LL n;
	n=2021041820210418;
	int len=0;
	for(LL i=1;i*i<=n;i++){
		if(n%i==0){
			factor[len++]=i;
			if(i!=n/i) factor[len++]=n/i;
		}
	}
	LL cnt=0;
	for (LL a=0;a<len;a++)
	{
		for (LL b = 0;b < len ;b++)
		{
			if(factor[a]*factor[b]>n) continue;
			for (LL c=0;c<len;c++){
				if(factor[a]*factor[b]*factor[c] == n)
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}
