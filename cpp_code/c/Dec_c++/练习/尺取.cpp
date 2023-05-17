#include <iostream>
#include <algorithm>

using namespace std;

int a[100010];

int main (){
	int n , S ;
	cin >> n >> S;
	for (int i=0;i < n;i++) scanf("%d",&a[i]);
	int sum = 0 ; int ans = 1e8;
	for(int i = 0 , j = 0;  i< n ;  )
	{
		if(sum  < S){sum += a[i];i++;}
		else {ans = min(i-j,ans);sum -=a[j];j++;	}
	}
	if (ans ==1e8) cout << 0 ;
	else cout << ans ;
	return 0;
	
}
