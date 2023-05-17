#include<iostream>
#include<algorithm>
using namespace std;

const long long N = 1000010;

long long a[N];
long long MIN[N];
long long n,k;

int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(int i=1;i<=n;i++){
		MIN[i]=N;
		for(long long j=i-k;j<=i+k;j++){
			if(j>=1&&j<=n){
				MIN[i]=MIN[i]<a[j]?MIN[i]:a[j];
			}
		}
	}
	for(int i=1;i<=n;i++){
		printf("%d ",MIN[i]);
	}
	cout << endl;
	return 0;
} 
