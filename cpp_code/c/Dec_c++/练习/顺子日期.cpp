#include<bits/stdc++.h>
using namespace std;

const int N =1e5+7;
int month[]={0,31,30,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int ans =0;
	for (int i=0;i<=2;i++)
		for(int j=0;j<10;j++)
		{
			int k =j+1;
			for (int l=0;l<10;l++)
			{
				int m=i*10+j;
			int d=k*10+l;
			if(m<13&&d<=month[m]&&(i==j-1||k==l-1))
			ans++;
			}
		 } 
	cout << ans;
}
