#include<iostream>
using namespace std;
int main(){
	int i=1;
	int a[10]={2021,2021,2021,2021,2021,2021,2021,2021,2021,2021};
	for(i=1;;i++){
		int b=i;
		while(b>0){
			if(--a[b%10]<0)
			break;
			b/=10;
		}
		int min=2021;
		for(int j=0;j<10;j++)
		{
			if(a[j]<min)
			min=a[j];
		}
		if(min<0)break;
	}
	cout<<i-1<<endl;
	return 0;
}
