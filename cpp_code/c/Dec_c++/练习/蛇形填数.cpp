#include<iostream>
using namespace std;

int a,b;
int ans;
int main(){
	a=1;b=1;
	ans=1;
	while (1){
		if(a==20&&b==20)
		break;
		if(a==1)
		{
			b++;ans++;
			while(b!=1){
				b--;a++;ans++;
			if(a==20&&b==20)
				break;
			}
		}
		
		if(b==1)
		{
			a++;ans++;
			while(a!=1){
				a--;b++;ans++;
			if(a==20&&b==20)
				break;
			}
		}
	}	
	cout << ans << endl;
	return 0;
}
