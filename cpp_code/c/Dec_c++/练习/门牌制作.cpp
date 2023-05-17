#include<bits/stdc++.h>
using namespace std;
int main(){
	int count=0;
	for (int i=0;i<=2020;i++)
		for(int j = i;j>0;j/=10)
	 		if(j%10==2)
			 count ++;
	cout << count << endl ;
}
